// Last updated: 7/3/2026, 11:44:32 PM
1class Solution {
2public:
3    string destCity(vector<vector<string>>& paths) 
4    {
5        set<string> start; 
6        set<string> dest; 
7
8        for (auto i: paths){
9            start.insert(i[0]); 
10            dest.insert(i[1]); 
11        }    
12
13        for (string i: start){
14            if (dest.find(i) != dest.end()) dest.erase(i); 
15        }
16
17        return *dest.begin(); 
18    }
19};