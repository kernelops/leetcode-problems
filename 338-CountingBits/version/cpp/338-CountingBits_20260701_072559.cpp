// Last updated: 7/1/2026, 7:25:59 AM
1class Solution {
2public:
3    vector<int> countBits(int n) 
4    {
5        vector<int> ans; 
6        for (int i=0; i<=n; i++){
7            int count=0; 
8            for (int j=0; j<32; j++)
9                if (i & (1<<j)) count++; 
10            ans.push_back(count); 
11        }  
12
13        return ans; 
14    }
15};