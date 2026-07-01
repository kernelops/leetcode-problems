// Last updated: 7/1/2026, 1:39:36 PM
1class Solution {
2public:
3    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
4    {
5        vector<int> pref(arr.size());
6        pref[0] = arr[0];  
7        for (int i=1; i<arr.size(); i++)
8            pref[i] = pref[i-1]^arr[i]; 
9
10        vector<int> ans; 
11        for (auto i: queries){
12            int l = i[0], r = i[1]; 
13
14            if (l==0) ans.push_back(pref[r]); 
15            else ans.push_back(pref[r]^pref[l-1]); 
16        }
17
18        return ans; 
19    }
20};