// Last updated: 8/21/2026, 12:15:14 AM
class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) 
    {
        vector<int> indegree(n, 0); 

        for (auto i: edges)
            indegree[i[1]]++; 

        int ans=0, count=0; 
        for (int i=0; i<n; i++){
            if (indegree[i] == 0){
                ans = i; 
                count++; 
            }
            if (count > 1) return -1; 
        }    

        return ans; 
    }
};