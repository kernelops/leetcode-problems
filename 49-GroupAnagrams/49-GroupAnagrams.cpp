// Last updated: 8/21/2026, 12:27:50 AM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        if (strs.size() == 1) return {strs}; 

        unordered_map<string, vector<string>> mpp; 
        for (string s: strs){
            string key = s; 
            sort(key.begin(), key.end()); 

            mpp[key].push_back(s); 
        }    

        vector<vector<string>> ans; 
        for (auto i: mpp){
            ans.push_back(i.second);
        }

        return ans; 
    }
};