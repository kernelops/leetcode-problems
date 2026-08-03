// Last updated: 8/3/2026, 11:25:26 PM
1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) 
4    {
5        if (s1.size() > s2.size()) return false;
6
7        unordered_map<char, int> mpp1, mpp2; 
8        for (char c: s1) mpp1[c]++; 
9
10        for (int i=0; i<s1.size(); i++) mpp2[s2[i]]++; 
11
12        int l=0, r=s1.size()-1; 
13
14        if (mpp2 == mpp1) return true; 
15
16        while (r<s2.size()){
17            r++; 
18            mpp2[s2[r]]++; 
19            mpp2[s2[l]]--;
20
21            if (mpp2[s2[l]] == 0)
22                mpp2.erase(s2[l]);
23            l++; 
24
25            if (mpp2 == mpp1) return true;  
26        }
27
28        return false; 
29    }
30};