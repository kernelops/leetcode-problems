// Last updated: 8/25/2026, 10:36:31 PM
1class Solution {
2public:
3    bool search(vector<int> &nums, int left, int right, int target){
4
5        if (left > right) return false; 
6
7        int mid = left + (right-left)/2; 
8
9        if (nums[mid] == target) return true; 
10
11        else if (nums[mid] > target) return search(nums, left, mid - 1, target); 
12
13        return search(nums, mid + 1, right, target);
14    } 
15    int missingMultiple(vector<int>& nums, int k) 
16    {
17        sort(nums.begin(), nums.end()); 
18
19        int left = 0, target=0; 
20        for (int i=1; i<=nums[nums.size()-1]/k; i++){
21            target = k*i; 
22            bool res = search(nums, left, nums.size()-1, target); 
23            if (res == false) return target;  
24        }
25
26        return target + k; 
27    }
28};