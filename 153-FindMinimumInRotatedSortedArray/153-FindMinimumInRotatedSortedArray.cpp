// Last updated: 6/3/2026, 11:32:43 PM
class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int mini = nums[0];
        int st=0, end=nums.size()-1;
        while (st<=end)
        {
            int mid = st+(end-st)/2;
            // if (st == end)
            // {
            //     if (nums[st] < min) min = nums[st];
            //     return min;
            // } 
            if (nums[st] <= nums[mid]) // Left Sorted
            {
                mini=min(mini, nums[st]);
                st = mid+1;
            }
            else // Right Sorted
            {
                mini=min(mini, nums[mid]);
                end = mid-1;
            }
        }
        return mini;
    }
};