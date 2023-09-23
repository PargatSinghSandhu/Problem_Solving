class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        int n=candidates.size();
        combin(0, target, ds, ans, candidates, n );
        return ans;
        
    }

        void combin ( int index, int target,vector<int> &ds, vector<vector<int>> &ans,vector<int>& candidates, int n)
        {
            
            if(target==0)
            {
                ans.push_back(ds);
                return;
            }
      

            for(int i=index;i<n;i++)
            {
                if(i>index &&candidates[i]==candidates[i-1])continue;
                if(candidates[i]>target)break;              
                ds.push_back(candidates[i]);
                combin(i+1, target-candidates[i], ds, ans, candidates, n );
                ds.pop_back();
            }
            
        }
};
