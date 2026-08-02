// Last updated: 8/2/2026, 9:28:52 AM
1class Solution {
2public:
3    bool isPalindrome(string s) 
4    {
5        string clean=""; 
6        for (char c: s)
7            if (isalnum(c)) clean += tolower(c);
8        
9        int l=0, r=clean.size()-1; 
10        while (l < r){
11            if (clean[l++] != clean[r--]) return false; 
12        }
13        return true; 
14    }
15};