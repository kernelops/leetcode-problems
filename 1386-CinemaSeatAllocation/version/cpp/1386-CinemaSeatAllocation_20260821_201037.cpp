// Last updated: 8/21/2026, 8:10:37 PM
1class Solution {
2public:
3    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) 
4    {
5        unordered_map<int, unordered_set<int>> mpp; 
6        for (auto i: reservedSeats) {
7            mpp[i[0]].insert(i[1]); 
8        }
9
10        int ans=0; 
11        for (auto [row, seats]: mpp) {
12            bool left = !seats.count(2) && !seats.count(3) && !seats.count(4) && !seats.count(5);
13            bool mid =  !seats.count(4) && !seats.count(5) && !seats.count(6) && !seats.count(7);
14            bool right = !seats.count(6) && !seats.count(7) && !seats.count(8) && !seats.count(9);
15
16            if (left && right) ans += 2; 
17            else if (left || mid || right) ans += 1; 
18        }
19
20        ans += 2 * (n - mpp.size()); 
21        return ans; 
22    }
23};