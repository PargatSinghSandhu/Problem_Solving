class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        
        vector<int> sub;
        vector<vector<int>> ans;  
        subset(0, nums, sub,ans);
        return ans;
    }
    

    void subset(int index, vector<int>& nums, vector<int>& sub,vector<vector<int>> &ans )
    {
        if(index==nums.size())
        {
            ans.push_back(sub);
            return;
        }
                
        sub.push_back(nums[index]);
        subset(index+1, nums, sub,ans );
        sub.pop_back();

        subset(index+1, nums, sub,ans );

    }    




    
};
