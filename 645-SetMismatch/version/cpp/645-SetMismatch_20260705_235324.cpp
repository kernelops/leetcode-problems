// Last updated: 7/5/2026, 11:53:24 PM
1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) 
4    {
5        int n = nums.size(); 
6        sort(nums.begin(), nums.end()); 
7
8        int duplicate = -1;
9        for (int i = 1; i < n; i++) {
10            if (nums[i] == nums[i - 1]) {
11                duplicate = nums[i];
12                break;
13            }
14        }    
15
16        int total_sum=0; 
17        for (int i: nums) total_sum += i; 
18
19        int missing = (n*(n+1)/2) - total_sum + duplicate; 
20
21        return {duplicate, missing};
22    }
23};