// Last updated: 7/3/2026, 6:18:45 PM
1class Solution {
2public:
3    int findLucky(vector<int>& arr) 
4    {
5        unordered_map<int, int> mpp; 
6        for (int i: arr) mpp[i]++; 
7
8        int ans=INT_MIN; 
9        for (auto i: mpp){
10            if (i.first == i.second)
11                ans = max(ans, i.first); 
12        }    
13
14        return (ans == INT_MIN) ? -1 : ans; 
15    }
16};