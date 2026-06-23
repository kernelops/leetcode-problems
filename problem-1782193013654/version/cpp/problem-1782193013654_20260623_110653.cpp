// Last updated: 6/23/2026, 11:06:53 AM
1class Solution {
2public:
3    int subsetXORSum(vector<int>& nums) 
4    {
5        vector<vector<int>> subsets;
6        subsets.push_back({});          
7
8        sort(nums.begin(), nums.end()); 
9
10        for (int x : nums) {
11            int n = subsets.size();     
12            for (int j = 0; j < n; ++j) {
13                vector<int> subset = subsets[j];  
14                subset.push_back(x);              
15                subsets.push_back(subset);        
16            }
17        }  
18
19        int ans=0; 
20        for (auto i: subsets){
21            if (i.size() == 1) ans += i[0]; 
22            if (i.size() > 1){
23                int val=0; 
24                for (int j: i){
25                    val = val^j; 
26                }
27                ans += val; 
28            }
29        }   
30
31        return ans; 
32    }
33};