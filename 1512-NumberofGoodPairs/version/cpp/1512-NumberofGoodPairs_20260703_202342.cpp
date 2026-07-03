// Last updated: 7/3/2026, 8:23:42 PM
1class Solution {
2public:
3    int numIdenticalPairs(vector<int>& nums) 
4    {
5        sort(nums.begin(), nums.end());
6
7        int ans=0, l=0, r=1; 
8        while (l < nums.size()){
9            if (r < nums.size() && nums[r] == nums[l]) r++; 
10            else{
11                int window = r-l; 
12                ans += (window*(window-1))/2; 
13
14                l=r; 
15                if (r != nums.size()-1) r = l+1; 
16            }
17        }  
18
19        return ans; 
20    }
21};