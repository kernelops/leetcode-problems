// Last updated: 8/21/2026, 12:14:30 AM
1class Solution {
2public:
3    vector<int> resultArray(vector<int>& nums) 
4    {
5        vector<int> arr1, arr2; 
6        arr1.push_back(nums[0]);
7        arr2.push_back(nums[1]); 
8
9        for (int i=2; i<nums.size(); i++){
10            if (arr1.back() > arr2.back()) arr1.push_back(nums[i]); 
11            else arr2.push_back(nums[i]); 
12        }    
13
14        vector<int> results = arr1; 
15        for (int i: arr2) results.push_back(i); 
16
17        return results; 
18    }
19};