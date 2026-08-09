// Last updated: 8/9/2026, 8:50:44 AM
1class Solution {
2public:
3    int findMin(vector<int>& nums) 
4    {
5        int left = 0, right = nums.size()-1;   
6        while (left < right){
7            int mid = left + (right-left)/2; 
8
9            if (nums[mid] > nums[right]) left = mid+1; 
10            else right = mid; 
11        }
12
13        return nums[left]; 
14    }
15};