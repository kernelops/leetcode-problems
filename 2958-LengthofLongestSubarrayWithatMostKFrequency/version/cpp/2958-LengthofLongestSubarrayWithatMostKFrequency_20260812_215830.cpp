// Last updated: 8/12/2026, 9:58:30 PM
1class Solution {
2public:
3    int maxSubarrayLength(vector<int>& nums, int k) 
4    {
5        unordered_map<int, int> mpp; 
6        for (int i: nums) mpp[i]++; 
7
8        unordered_map<int, int> freq; 
9        int ans=0, l=0; 
10
11        for (int r=0; r<nums.size(); r++){
12            freq[nums[r]]++; 
13
14            while (freq[nums[r]] > k){
15                freq[nums[l]]--; 
16                if (freq[nums[l]] == 0) freq.erase(nums[l]); 
17                l++; 
18            }
19            
20            ans = max(ans, r-l+1); 
21        }
22
23        return ans;     
24    }
25};