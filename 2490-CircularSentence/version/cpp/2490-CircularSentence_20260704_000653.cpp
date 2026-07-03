// Last updated: 7/4/2026, 12:06:53 AM
1class Solution {
2public:
3    bool isCircularSentence(string sentence) 
4    {
5        vector<string> words; string word="";
6        for (char c: sentence){
7            if (c == ' '){
8                words.push_back(word); 
9                word = ""; 
10            }
11            else word += c; 
12        }    
13        words.push_back(word); 
14
15        if (words.size() == 1){
16            if (words[0][0] == words[0][words[0].size()-1]) return true; 
17            else return false; 
18        } 
19
20        for (int i=1; i<words.size(); i++)
21            if (words[i][0] != words[i-1][words[i-1].size()-1]) return false; 
22
23        if (words[0][0] != words[words.size()-1][words[words.size()-1].size()-1])       return false; 
24        
25        return true; 
26    }
27};