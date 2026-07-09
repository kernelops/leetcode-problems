// Last updated: 7/9/2026, 11:58:20 PM
class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int totalSum=0; 
        for (int i: nums) totalSum += i; 

        int leftSum=0;
        for (int i=0; i<nums.size(); i++){
            if (i != 0) leftSum += nums[i-1];  
            int rightSum = totalSum - leftSum - nums[i]; 
            if (leftSum == rightSum) return i; 
        }

        return -1; 
    }
};