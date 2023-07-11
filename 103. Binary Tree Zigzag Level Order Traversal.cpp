/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> res;
        if(root==NULL)
        {
            return res ;
        }

        queue<TreeNode*> queue;
        queue.push(root);
        bool lefttoright = true;
        while(!queue.empty())
        {           
            int size = queue.size();
            vector<int> row(size);
            
            for(int i=0;i<size;i++)
            {
            TreeNode* node = queue.front();
            queue.pop();
            
            int index = (lefttoright)? i:(size-i-1);
            row[index]= node->val;

            if(node->left)
            {
                queue.push(node->left);
            }

            if(node->right)
            {
                queue.push(node->right);
            }           
            
          }

            lefttoright = !lefttoright;
            res.push_back(row);

        }
        return res;
        
    }
};
