// Last updated: 7/10/2026, 12:01:53 AM
class Solution {
public:
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>> subsets; 
        subsets.push_back({}); 

        // code to find subsets
        for (int i=1; i<=n; i++){
            vector<int> subset; 
            int size = subsets.size(); 
            for (int j=0; j<size; j++){
                subset = subsets[j]; 
                subset.push_back(i); 
                subsets.push_back(subset); 
            }
        }

        // pick only those subsets whose size is equal to k
        vector<vector<int>> ans; 
        for (auto i: subsets){
            if (i.size() == k) ans.push_back(i); 
        }

        return ans; 
    }
};