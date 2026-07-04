// Last updated: 7/5/2026, 12:10:59 AM
1class Solution {
2public:
3    bool isPathCrossing(string path) 
4    {
5        vector<int> pos = {0, 0};   
6        set<vector<int>> visited;
7
8        visited.insert(pos); 
9
10        for (char c: path){
11            if (c == 'N') pos[1]++; 
12            else if (c == 'S') pos[1]--; 
13            else if (c == 'E') pos[0]++; 
14            else if (c == 'W') pos[0]--; 
15
16            if (visited.find(pos) != visited.end()) return true; 
17
18            visited.insert(pos);  
19        }    
20
21        return false; 
22    }
23};