// Last updated: 7/3/2026, 9:24:34 PM
1class Solution {
2public:
3    int countConsistentStrings(string allowed, vector<string>& words) 
4    {
5        int ans=0; 
6        for (string word: words){
7            int count=0; 
8            for (char c: word){
9                if (allowed.find(c) != string::npos) count++; 
10            }
11            if (count == word.size()) ans++; 
12        } 
13
14        return ans;        
15    }
16};