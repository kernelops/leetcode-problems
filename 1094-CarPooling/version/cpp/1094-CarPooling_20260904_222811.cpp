// Last updated: 9/4/2026, 10:28:11 PM
1class Solution {
2public:
3    bool carPooling(vector<vector<int>>& trips, int capacity) 
4    {
5        vector<int> passengers(1001, 0); 
6        for (auto i: trips) {
7            int from = i[1]; 
8            int to = i[2]; 
9
10            passengers[from] += i[0];
11            passengers[to] -= i[0]; 
12        }    
13
14        int count=0; 
15        for (int i: passengers) {
16            count += i; 
17            if (count > capacity) return false;
18        }
19
20        return true; 
21    }
22};