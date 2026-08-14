// Last updated: 8/14/2026, 10:14:40 AM
1class Solution {
2public:
3    int maximumLengthSubstring(string s) 
4    {
5        int l=0, ans=0;
6        unordered_map<char, int> mpp;  
7
8        for (int r=0; r<s.size(); r++){
9            mpp[s[r]]++; 
10            while (mpp[s[r]] > 2){
11                mpp[s[l]]--; 
12                l++; 
13            }
14            ans = max(ans, r-l+1); 
15        }    
16
17        return ans; 
18    }
19};