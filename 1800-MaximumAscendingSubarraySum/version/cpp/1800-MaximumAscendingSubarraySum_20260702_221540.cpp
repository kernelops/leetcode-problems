// Last updated: 7/2/2026, 10:15:40 PM
1class Solution {
2public:
3    int maxAscendingSum(vector<int>& nums) 
4    {
5        int maxSum=0, currentSum=nums[0]; 
6        for (int i=1; i<nums.size(); i++){
7            if (nums[i] > nums[i-1]) currentSum += nums[i]; 
8            else{
9                maxSum = max(maxSum, currentSum); 
10                currentSum = nums[i]; 
11            }
12        }  
13        maxSum = max(maxSum, currentSum);   
14
15        return maxSum; 
16    }
17};