// Last updated: 6/23/2026, 11:41:54 AM
1class Solution {
2public:
3    vector<vector<int>> combine(int n, int k) 
4    {
5        vector<vector<int>> subsets; 
6        subsets.push_back({}); 
7
8        // code to find subsets
9        for (int i=1; i<=n; i++){
10            vector<int> subset; 
11            int size = subsets.size(); 
12            for (int j=0; j<size; j++){
13                subset = subsets[j]; 
14                subset.push_back(i); 
15                subsets.push_back(subset); 
16            }
17        }
18
19        // pick only those subsets whose size is equal to k
20        vector<vector<int>> ans; 
21        for (auto i: subsets){
22            if (i.size() == k) ans.push_back(i); 
23        }
24
25        return ans; 
26    }
27};