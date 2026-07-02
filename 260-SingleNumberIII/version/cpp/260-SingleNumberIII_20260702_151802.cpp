// Last updated: 7/2/2026, 3:18:02 PM
1class Solution {
2public:
3    vector<int> singleNumber(vector<int>& nums) 
4    {
5        int num=0; 
6        for (int i: nums) num = num^i; 
7
8        unsigned int mask = (unsigned int) num & (-(unsigned int)num);
9        int rightmostSetBit = (int)mask; 
10        vector<int> b1, b2; 
11        for (int i: nums){
12            if (i & rightmostSetBit)
13                b1.push_back(i); 
14            else b2.push_back(i); 
15        }
16
17        vector<int> ans; int n=0; 
18        for (int i: b1) n = n^i; 
19        ans.push_back(n); n=0; 
20        for (int i: b2) n = n^i; 
21        ans.push_back(n); 
22
23        return ans; 
24    }
25};