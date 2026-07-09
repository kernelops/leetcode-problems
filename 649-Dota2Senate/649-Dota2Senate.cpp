// Last updated: 7/9/2026, 11:58:26 PM
class Solution {
public:
    string predictPartyVictory(string senate) 
    {
        queue<int> qR, qD; 
        for (int i=0; i<senate.size(); i++)
            senate[i] == 'R' ? qR.push(i) : qD.push(i); 
        
        while (!qR.empty() && !qD.empty()){
            int valR = qR.front(); qR.pop(); 
            int valD = qD.front(); qD.pop(); 

            if (valR < valD) qR.push(valR + senate.size()); 
            else qD.push(valD + senate.size()); 
        }

        return qR.empty() ? "Dire" : "Radiant"; 
    }
};