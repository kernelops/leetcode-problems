// Last updated: 6/3/2026, 11:34:20 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int st=0, end=nums.size()-1;
        while (st<=end)
        {
            int mid = st + (end-st)/2;
            if (nums[mid] >= target)
                end = mid-1;
            else if (nums[mid] <= target)
                st = mid+1;
            else return mid;
        }    
        return st;
    }
};