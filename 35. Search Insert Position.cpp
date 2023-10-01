class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int low = 0, high = size-1, mid, ans=size;

        while(high>=low)
        {
            mid = (low+high)/2;

            if(nums[mid]>=target)
            {
                ans=mid;
                high = mid -1;
            }
            
            else
            {
              low = mid+1;
                
                
            }
            
            
        
        }
        return ans;
    }
};
