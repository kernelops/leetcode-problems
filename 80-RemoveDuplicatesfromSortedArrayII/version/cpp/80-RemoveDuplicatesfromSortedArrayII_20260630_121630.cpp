// Last updated: 6/30/2026, 12:16:30 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) 
4    {
5        map<int, int> mpp; 
6        for (int n: nums) mpp[n]++; 
7
8        int a=0; 
9        for (auto i: mpp){
10            if (i.second>=2){
11                nums[a++] = i.first; 
12                nums[a++] = i.first; 
13            }
14            else if (i.second == 1) nums[a++] = i.first; 
15        }
16
17        return a; 
18    }
19};