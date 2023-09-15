class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>sub;
        int size = candidates.size();
        findcomb(0,size, target, candidates, ans, sub );
        return ans;
    }
    void  findcomb(int index, int size, int target,vector<int>& candidates,vector<vector<int>> &ans, vector<int>&sub  )
    {

        if(index==size)
        {
            if(target==0)
            {
                ans.push_back(sub);
            }
            return ;
        }


        if(candidates[index]<=target)
        {
            sub.push_back(candidates[index]);
            findcomb(index,size, target-candidates[index],candidates,ans,sub);
            sub.pop_back();
        }
        findcomb(index+1, size, target,candidates,ans,sub);



    }
};
