// Last updated: 6/3/2026, 11:30:01 PM
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int l=0, r=0, zero=0; int maxi=0;
        while (r<nums.size())
        {
            if (nums[r] == 0) zero++;
            r++;
            while (zero>k)
            {
                if (nums[l] == 0) zero--;
                l++;
            }
            maxi = max(maxi, r-l);
        }    
        return maxi;
    }
};