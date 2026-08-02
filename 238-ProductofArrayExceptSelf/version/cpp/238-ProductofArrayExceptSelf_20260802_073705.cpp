// Last updated: 8/2/2026, 7:37:05 AM
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) 
4    {
5        int prod=1; vector<int> zero; 
6        for (int i=0; i<nums.size(); i++){
7            if (nums[i] == 0){
8                zero.push_back(i); 
9                continue; 
10            }
11            prod *= nums[i]; 
12        }    
13
14        vector<int> ans; 
15        for (int i=0; i<nums.size(); i++){
16            if (zero.size() == 1 && i != zero[0]) ans.push_back(0); 
17            else if (zero.size() == 1 && i == zero[0]) ans.push_back(prod); 
18            else if (zero.size() > 1) ans.push_back(0); 
19            else if (zero.size() == 0) ans.push_back(prod/nums[i]); 
20        }
21
22        return ans; 
23    }
24};