// Last updated: 7/9/2026, 11:56:37 PM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());

        int ans=0, l=0, r=1; 
        while (l < nums.size()){
            if (r < nums.size() && nums[r] == nums[l]) r++; 
            else{
                int window = r-l; 
                ans += (window*(window-1))/2; 

                l=r; 
                if (r != nums.size()-1) r = l+1; 
            }
        }  

        return ans; 
    }
};