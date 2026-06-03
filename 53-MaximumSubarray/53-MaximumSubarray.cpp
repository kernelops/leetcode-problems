// Last updated: 6/3/2026, 11:34:05 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int currentSum=0, maxSum=INT_MIN; 
        for (int i: nums){
            currentSum += i; 

            maxSum = max(maxSum, currentSum); 
            if (currentSum < 0) currentSum=0; 
        }

        return maxSum; 
    }
};