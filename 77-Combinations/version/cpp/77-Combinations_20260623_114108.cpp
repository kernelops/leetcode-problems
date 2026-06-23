// Last updated: 6/23/2026, 11:41:08 AM
1class Solution {
2public:
3    vector<vector<int>> combine(int n, int k) 
4    {
5        vector<vector<int>> subsets; 
6        subsets.push_back({}); 
7
8        for (int i=1; i<=n; i++){
9            vector<int> subset; 
10            int size = subsets.size(); 
11            for (int j=0; j<size; j++){
12                subset = subsets[j]; 
13                subset.push_back(i); 
14                subsets.push_back(subset); 
15            }
16        }
17
18        vector<vector<int>> ans; 
19        for (auto i: subsets){
20            if (i.size() == k) ans.push_back(i); 
21        }
22
23        return ans; 
24    }
25};