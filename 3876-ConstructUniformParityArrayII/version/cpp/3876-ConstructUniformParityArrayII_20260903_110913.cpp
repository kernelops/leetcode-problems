// Last updated: 9/3/2026, 11:09:13 AM
1class Solution {
2public:
3    bool uniformArray(vector<int>& nums1) {
4        int mini = INT_MAX; 
5        for (int i: nums1) {
6            if (i < mini) mini = i; 
7        }
8
9        if (mini % 2 != 0) return true; // min is odd -> true always
10        for (int i: nums1) 
11            if (i % 2 != 0) return false; // min is even, but has an odd element -> false
12        
13        return true; 
14    }
15};