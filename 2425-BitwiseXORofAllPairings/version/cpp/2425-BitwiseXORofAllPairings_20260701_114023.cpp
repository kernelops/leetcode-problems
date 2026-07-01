// Last updated: 7/1/2026, 11:40:23 AM
1class Solution {
2public:
3    int xorAllNums(vector<int>& nums1, vector<int>& nums2) 
4    {
5        int ans=0;
6        if (nums2.size() % 2 == 0){
7            if (nums1.size() % 2 == 0) return 0; 
8            else{
9                for (int i: nums2) ans = ans^i; 
10            }
11        }    
12        else{
13            if (nums1.size() % 2 != 0){
14                for (int i: nums2) ans = ans^i; 
15                for (int i: nums1) ans = ans^i; 
16            }
17            else{
18                for (int i: nums1) ans = ans^i; 
19            }
20        }
21
22        return ans;
23    }
24};