// Last updated: 7/2/2026, 10:32:13 PM
1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) 
4    {
5        int totalSum=0; 
6        for (int i: nums) totalSum += i; 
7
8        int leftSum=0;
9        for (int i=0; i<nums.size(); i++){
10            if (i != 0) leftSum += nums[i-1];  
11            int rightSum = totalSum - leftSum - nums[i]; 
12            if (leftSum == rightSum) return i; 
13        }
14
15        return -1; 
16    }
17};