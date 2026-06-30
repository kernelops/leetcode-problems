// Last updated: 6/30/2026, 9:56:35 AM
1class Solution {
2public:
3    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
4    {
5        string w1="", w2=""; 
6        for (string s: word1) w1 += s; 
7        for (string s: word2) w2 += s; 
8
9        return w1 == w2;     
10    }
11};