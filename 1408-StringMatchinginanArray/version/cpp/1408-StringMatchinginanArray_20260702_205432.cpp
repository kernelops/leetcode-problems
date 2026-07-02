// Last updated: 7/2/2026, 8:54:32 PM
1class Solution {
2public:
3    vector<string> stringMatching(vector<string>& words) 
4    {
5        vector<string> ans; 
6        for (int i=0; i<words.size(); i++){
7            for (int j=0; j<words.size(); j++){
8                if (i!=j && words[j].find(words[i]) != string::npos){
9                    ans.push_back(words[i]); 
10                    break; 
11                }
12            }
13        }
14
15        return ans; 
16    }
17};