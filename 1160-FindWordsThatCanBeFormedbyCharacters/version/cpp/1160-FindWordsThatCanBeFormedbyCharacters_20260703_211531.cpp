// Last updated: 7/3/2026, 9:15:31 PM
1class Solution {
2public:
3    int countCharacters(vector<string>& words, string chars) 
4    {
5        unordered_map<char, int> mpp; 
6
7        for (char c: chars) mpp[c]++; 
8
9        int ans=0; 
10        for (string word: words){
11            int count=0; 
12            unordered_map<char, int> temp = mpp; 
13            if (word.size() > chars.size()) continue; 
14            for (char c: word){
15                if (temp.find(c) != temp.end()){
16                    temp[c]--; 
17                    if (temp[c] == 0) temp.erase(c); 
18                    count++; 
19                } 
20            }
21
22            if (count == word.size()) ans += count; 
23        }    
24
25        return ans; 
26    }
27};