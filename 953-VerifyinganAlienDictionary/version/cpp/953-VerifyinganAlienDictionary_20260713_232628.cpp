// Last updated: 7/13/2026, 11:26:28 PM
1class Solution {
2public:
3    bool isAlienSorted(vector<string>& words, string order) 
4    {
5        unordered_map<char, int> mpp; 
6        for (int i=0; i<order.size(); i++) mpp[order[i]] = i; 
7
8        for (int i=0; i<words.size()-1; i++){
9            string w1 = words[i]; 
10            string w2 = words[i+1]; 
11            int j=0;  
12
13            while (j < w2.size() && j < w2.size()){
14                if (w1[j] != w2[j]){
15                    if (mpp[w1[j]] > mpp[w2[j]]) return false; 
16                    break; 
17                }
18                j++; 
19            }
20
21            if (j == w2.size() && w1.size() > w2.size()) return false; 
22        }     
23
24        return true;
25    }
26};