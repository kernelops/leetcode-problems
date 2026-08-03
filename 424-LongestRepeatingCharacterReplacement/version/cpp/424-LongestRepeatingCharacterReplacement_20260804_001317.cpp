// Last updated: 8/4/2026, 12:13:17 AM
1class Solution {
2public:
3    int characterReplacement(string s, int k) 
4    {
5        int left=0, right=0; int windowSize=0, maxFreq=0; int ans=0; 
6        map<char, int> mpp; 
7        while (right < s.size()){
8            char c = s[right]; 
9            mpp[c]++; 
10            windowSize++; 
11            for (auto i: mpp){
12                maxFreq = max(maxFreq, i.second); 
13            }
14
15            while ((windowSize-maxFreq) > k){
16                mpp[s[left]]--; 
17                left++;
18                windowSize--;
19                for (auto i: mpp){
20                    maxFreq = max(maxFreq, i.second);
21                }
22            }
23            ans = max(ans, windowSize); 
24            right++; 
25        }
26        return ans;
27    }
28};