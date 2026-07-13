// Last updated: 7/13/2026, 11:35:55 PM
1class Solution {
2public:
3    int findJudge(int n, vector<vector<int>>& trust) 
4    {
5        vector<int> indegree(n+1, 0); 
6        vector<int> outdegree(n+1, 0); 
7        if (trust.empty())
8            return (n == 1) ? 1 : -1; 
9
10        for (auto i: trust){
11            indegree[i[1]]++; 
12            outdegree[i[0]]++;
13        }
14
15        for (int i=0; i<indegree.size(); i++) 
16            if (indegree[i] == n-1 && outdegree[i] == 0) return i; 
17
18        return -1; 
19    }
20};