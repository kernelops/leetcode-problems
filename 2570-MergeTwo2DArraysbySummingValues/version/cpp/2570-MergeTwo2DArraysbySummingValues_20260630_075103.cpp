// Last updated: 6/30/2026, 7:51:03 AM
1class Solution {
2public:
3    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) 
4    {
5        sort(nums1.begin(), nums1.end()); 
6        sort(nums2.begin(), nums2.end()); 
7
8        int ptr1=0, ptr2=0; vector<vector<int>> ans; 
9        while (ptr1 < nums1.size() && ptr2 < nums2.size()){
10            if (nums1[ptr1][0] == nums2[ptr2][0]){
11                ans.push_back({nums1[ptr1][0], nums1[ptr1][1]+nums2[ptr2][1]}); 
12                ptr1++; ptr2++; 
13            }
14
15            else if (nums1[ptr1][0] < nums2[ptr2][0]){
16                ans.push_back({nums1[ptr1][0], nums1[ptr1][1]}); 
17                ptr1++; 
18            }
19
20            else if (nums2[ptr2][0] < nums1[ptr1][0]){
21                ans.push_back({nums2[ptr2][0], nums2[ptr2][1]}); 
22                ptr2++;                 
23            }
24        } 
25
26        while (ptr1 < nums1.size()){
27            ans.push_back(nums1[ptr1++]); 
28        }   
29
30        while (ptr2 < nums2.size()){
31            ans.push_back(nums2[ptr2++]);
32        }
33
34        return ans; 
35    }
36};