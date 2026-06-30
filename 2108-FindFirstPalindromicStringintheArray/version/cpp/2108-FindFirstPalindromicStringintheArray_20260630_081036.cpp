// Last updated: 6/30/2026, 8:10:36 AM
1class Solution {
2public:
3    bool palindrome(string s){
4        int l=0, r=s.size()-1; 
5        while (l < r)
6            if (s[l++] != s[r--]) return false; 
7        return true; 
8    }
9    string firstPalindrome(vector<string>& words) 
10    {
11        for (string word: words){
12            if (palindrome(word)) return word; 
13        }
14        return ""; 
15    }
16};