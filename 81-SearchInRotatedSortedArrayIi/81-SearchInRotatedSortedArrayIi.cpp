// Last updated: 6/3/2026, 11:33:40 PM
class Solution {
public:
    bool search(vector<int>& nums, int target) 
    {
        int st=0, end=nums.size()-1;
        while (st<=end)
        {
            int mid = st+(end-st)/2;
            if (nums[mid] == target) return true;

            if (nums[st] == nums[mid] && nums[mid] == nums[end]) {
                st++;
                end--;
            }

            else if (nums[st] <= nums[mid]) // Left Sorted
            {
                if (nums[st] <= target && nums[mid] >= target)
                    end = mid-1;
                else st = mid+1;
            }
            else // Right Sorted 
            {
                if (nums[mid] <= target && nums[end] >= target)
                    st = mid+1;
                else end = mid-1;
            }
        }  
        return false;         
    }
};