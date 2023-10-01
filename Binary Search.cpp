class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int size = nums.size();
        int low = 0, high = size-1, mid;

        while(high>=low)
        {
            mid = (low+high)/2;

            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]<target)
            {
                low = mid+1;
            }
            else
            {
                high = mid -1 ;
            }
        
        }
        return -1;
    }
};
