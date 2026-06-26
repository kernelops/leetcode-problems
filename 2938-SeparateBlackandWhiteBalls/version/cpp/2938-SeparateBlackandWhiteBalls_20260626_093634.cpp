// Last updated: 6/26/2026, 9:36:34 AM
1class Solution {
2public:
3    long long minimumSteps(string s) 
4    {
5        int countZero = 0; 
6        for (char c: s){
7            if (c == '0') countZero++; 
8        }   
9
10        string req=""; 
11        for (int i=0; i<countZero; i++) req += '0'; 
12        for (int i=0; i<s.size()-countZero; i++) req += '1'; 
13
14        vector<int> pos1, pos2; 
15        for (int i=0; i<s.size(); i++)
16            if (s[i] == '1') pos1.push_back(i); 
17        
18        for (int i=0; i<req.size(); i++)
19            if (req[i] == '1') pos2.push_back(i); 
20
21        long long ans=0; 
22        for (int i=0; i<pos1.size(); i++)
23            ans += (pos2[i] - pos1[i]); 
24        
25        return ans; 
26    }
27};