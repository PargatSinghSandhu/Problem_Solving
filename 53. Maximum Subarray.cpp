class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi= INT_MIN;
        int sum = 0;
        int start =0, anstart=0, ansend=0;

        for(int i=0;i<nums.size();i++)
        {
            if(sum==0)
            {
                start =i;
            }
            sum=sum+nums[i];
            
            if(sum>maxi)
            {
                maxi=sum;
                anstart = start;
                ansend = i;
                
            }
            if(sum<0)
            {
               sum=0;
            }
            

        }
        for(int j = anstart; j<ansend;j++)
            {
                cout<<nums[j];
            }
        return maxi;
    }
};
