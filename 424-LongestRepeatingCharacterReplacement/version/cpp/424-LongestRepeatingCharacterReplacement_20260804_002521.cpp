// Last updated: 8/4/2026, 12:25:21 AM
1class Solution {
2public:
3    int characterReplacement(string s, int k) 
4    {
5        unordered_map<char, int> mpp;
6        int l=0, r=0, maxFreq=0, ans=0, window=0; 
7
8        while (r<s.size()){
9            mpp[s[r]]++; 
10            maxFreq = max(maxFreq, mpp[s[r]]);
11            window = r-l+1; 
12
13            while (window - maxFreq > k){
14                mpp[s[l]]--; 
15                l++; 
16                window = r-l+1; 
17
18                maxFreq = 0; 
19                for (auto i: mpp)
20                    maxFreq = max(maxFreq, i.second); 
21            } 
22
23            window = r-l+1;
24            ans = max(ans, window); 
25            r++; 
26        }
27
28        return ans; 
29    }
30};