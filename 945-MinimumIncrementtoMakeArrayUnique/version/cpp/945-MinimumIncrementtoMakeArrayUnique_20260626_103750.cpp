// Last updated: 6/26/2026, 10:37:50 AM
1class Solution {
2public:
3    int minIncrementForUnique(vector<int>& nums) 
4    {
5        sort(nums.begin(), nums.end()); 
6
7        int ans=0, prev = nums[0]; 
8        for (int i=1; i<nums.size(); i++){
9            if (nums[i] <= prev){
10                ans += (prev - nums[i] + 1);
11                prev += 1; 
12            }
13            else prev = nums[i];  
14        }   
15
16        return ans; 
17
18    }
19};