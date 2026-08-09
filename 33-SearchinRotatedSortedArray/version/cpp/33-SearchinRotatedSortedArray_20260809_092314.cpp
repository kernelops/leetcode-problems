// Last updated: 8/9/2026, 9:23:14 AM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) 
4    {
5        int left = 0, right = nums.size()-1; 
6        
7        while (left <= right){
8            int mid = left + (right - left)/2; 
9
10            if (nums[mid] == target) return mid; 
11            
12            // left sorted
13            if (nums[left] <= nums[mid]){
14                if (target >= nums[left] && target < nums[mid]){
15                    right = mid-1; 
16                }
17                else left = mid+1; 
18            }
19
20            // right sorted
21            else{
22                if (target > nums[mid] && target <= nums[right]){
23                    left = mid+1; 
24                }
25                else right = mid-1; 
26            }
27        }
28
29        return -1; 
30    }
31};