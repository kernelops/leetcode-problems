// Last updated: 8/30/2026, 9:44:40 AM
1class Solution {
2public:
3    int countSpecialIntegers(vector<int>& nums) 
4    {
5        unordered_map<int, int> mpp; 
6        for (int i: nums) mpp[i]++; 
7
8        int ans=0, r=1, l=0; 
9        while (r < nums.size()){
10            if (nums[r] == nums[l]) r++; 
11            else {
12                int size = r-l; 
13                if (mpp[nums[l]] == size) ans++; 
14                l = r; r++; 
15            }
16        }    
17
18        int size = r-l; 
19        if (mpp[nums[l]] == size) ans++;
20
21        return ans; 
22    }
23};