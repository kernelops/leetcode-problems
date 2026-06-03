// Last updated: 6/3/2026, 11:30:09 PM
class Solution {
public:
    int answer(vector<int>& nums, int goal)
    {
        int l=0, r=0, count=0, sum=0;
        if (goal < 0) return 0;
        while (r<nums.size())
        {
            sum += nums[r];
            r++; 
            if (sum <= goal) count = count + (r-l);
            while (sum > goal)
            {
                sum -= nums[l];
                l++; 
                if (sum == goal) count += (r-l);
            }
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        return answer(nums, goal) - answer(nums, goal-1); 
    }
};