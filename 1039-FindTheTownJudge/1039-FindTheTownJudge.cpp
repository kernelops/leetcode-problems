// Last updated: 8/21/2026, 12:19:12 AM
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        vector<int> indegree(n+1, 0); 
        vector<int> outdegree(n+1, 0); 
        if (trust.empty())
            return (n == 1) ? 1 : -1; 

        for (auto i: trust){
            indegree[i[1]]++; 
            outdegree[i[0]]++;
        }

        for (int i=0; i<indegree.size(); i++) 
            if (indegree[i] == n-1 && outdegree[i] == 0) return i; 

        return -1; 
    }
};