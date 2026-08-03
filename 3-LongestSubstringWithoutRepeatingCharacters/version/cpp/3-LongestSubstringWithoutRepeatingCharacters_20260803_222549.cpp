// Last updated: 8/3/2026, 10:25:49 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) 
4    {
5        unordered_map<char, int> mpp; int ans=0; 
6        int l=0, r=0; 
7        while (r < s.size()){
8            mpp[s[r]]++; 
9            if (mpp[s[r]] > 1){
10                while (mpp[s[r]] > 1){
11                    mpp[s[l]]--; l++; 
12                }
13            }
14            ans = max(ans, r-l+1);
15            r++;  
16        }    
17
18        return ans; 
19    }
20};