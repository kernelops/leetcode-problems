// Last updated: 8/29/2026, 8:42:08 PM
1class Solution {
2public:
3    vector<string> largestString(vector<int>& nums) 
4    {
5        vector<string> ans; 
6        
7        for (int i: nums) {
8            string word=""; 
9            while (i >= (1LL << 25)) {      
10                word += 'z';
11                i -= (1LL << 25);
12            }
13            
14            while (i > 0){
15                int p = 1; 
16                while ((1LL << p) <= i) p++; 
17                p--; 
18                i = i - (1LL << p); 
19                word += (char)('a' + p); 
20            }
21            ans.push_back(word); 
22        }   
23
24        return ans; 
25    }
26};