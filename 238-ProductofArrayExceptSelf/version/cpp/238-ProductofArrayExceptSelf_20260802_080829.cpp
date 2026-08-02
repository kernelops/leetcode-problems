// Last updated: 8/2/2026, 8:08:29 AM
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) 
4    {
5        // for prod without using division
6        // for an index i, take the left product (from 0th index to ith index) x right product (from (i+1)th index to nums.size()-1 th index)
7
8        vector<int> ans; 
9
10        int left = 1;
11        for (int i=0; i<nums.size(); i++){
12            ans.push_back(left); 
13            left *= nums[i]; 
14        }    
15
16        int right=1; 
17        for (int i=nums.size()-1; i>=0; i--){
18            ans[i] = ans[i]*right; 
19            right *= nums[i]; 
20        }
21
22        return ans; 
23    }
24};