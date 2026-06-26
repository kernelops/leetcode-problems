// Last updated: 6/26/2026, 10:58:01 PM
1class Solution {
2public:
3    string predictPartyVictory(string senate) 
4    {
5        queue<int> qR, qD; 
6        for (int i=0; i<senate.size(); i++)
7            senate[i] == 'R' ? qR.push(i) : qD.push(i); 
8        
9        while (!qR.empty() && !qD.empty()){
10            int valR = qR.front(); qR.pop(); 
11            int valD = qD.front(); qD.pop(); 
12
13            if (valR < valD) qR.push(valR + senate.size()); 
14            else qD.push(valD + senate.size()); 
15        }
16
17        return qR.empty() ? "Dire" : "Radiant"; 
18    }
19};