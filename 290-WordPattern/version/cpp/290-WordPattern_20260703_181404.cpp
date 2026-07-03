// Last updated: 7/3/2026, 6:14:04 PM
1class Solution {
2public:
3    bool wordPattern(string pattern, string s) 
4    {
5        unordered_map<char, string> mpp; 
6        unordered_map<string, char> rev; 
7
8        vector<string> words; 
9        string word = ""; 
10        for (char c: s){
11            if (c == ' '){
12                words.push_back(word); 
13                word=""; 
14            }
15            else word += c; 
16        }    
17        words.push_back(word); 
18
19        if (pattern.size() != words.size()) return false; 
20
21        for (int i=0; i<pattern.size(); i++){
22            if (mpp.find(pattern[i]) == mpp.end()){
23                if (rev.find(words[i]) != rev.end()) return false;
24                mpp[pattern[i]] = words[i]; 
25                rev[words[i]] = pattern[i];
26            }
27            else{
28                if (mpp[pattern[i]] != words[i]) return false; 
29                if (rev[words[i]] != pattern[i]) return false; 
30            } 
31        }
32
33        return true; 
34    }
35};