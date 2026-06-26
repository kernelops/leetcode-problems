// Last updated: 6/26/2026, 1:35:12 PM
class Solution {
public:
    int minimumLength(string s) 
    {
        unordered_map<char, vector<int>> mpp; 
        for (int i=0; i<s.size(); i++) mpp[s[i]].push_back(i);

        int ans=0; 
        for (auto i: mpp){
            auto vec = i.second; 
            
            if (vec.size() % 2 == 0) ans += 2; 
            else ans += 1;
        } 

        return ans; 
    }
};