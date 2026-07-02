// Last updated: 7/2/2026, 9:29:06 PM
1class Solution {
2public:
3    int longestMonotonicSubarray(vector<int>& nums) 
4    {
5        int inc=1, dec=1, ans=1; 
6
7        for (int i=1; i<nums.size(); i++){
8            if (nums[i] > nums[i-1]){
9                inc++; dec=1; 
10            }
11
12            else if (nums[i] < nums[i-1]){
13                dec++; inc=1;
14            }
15
16            else inc = dec = 1;
17
18            ans = max(ans, max(inc, dec)); 
19        }    
20
21        return ans; 
22    }
23};