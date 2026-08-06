// Last updated: 8/6/2026, 11:07:42 PM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) 
4    {
5        int left = 0, right = nums.size()-1; 
6        while (left <= right){
7            int mid = left + (right-left)/2; 
8
9            if (nums[mid] == target) return mid; 
10            if (nums[mid] > target) right = mid-1; 
11            else left = mid+1; 
12        }     
13
14        return -1; 
15    }
16};