// Last updated: 6/3/2026, 11:30:43 PM
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int left=0, right=0, prod=1, count=0; 
        if (k<=1) return 0; 
        while (right<nums.size()){
            prod = prod*nums[right]; 
            while (prod >= k){
                prod = prod / nums[left]; 
                left++; 
            }
            count += (right-left+1); right++; 
        }    

        return count; 
    }
};