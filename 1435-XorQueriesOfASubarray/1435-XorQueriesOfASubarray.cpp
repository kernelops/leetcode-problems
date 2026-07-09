// Last updated: 7/9/2026, 11:57:04 PM
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        vector<int> pref(arr.size());
        pref[0] = arr[0];  
        for (int i=1; i<arr.size(); i++)
            pref[i] = pref[i-1]^arr[i]; 

        vector<int> ans; 
        for (auto i: queries){
            int l = i[0], r = i[1]; 

            if (l==0) ans.push_back(pref[r]); 
            else ans.push_back(pref[r]^pref[l-1]); 
        }

        return ans; 
    }
};