// Last updated: 7/9/2026, 11:56:39 PM
class Solution {
public:
    bool isPathCrossing(string path) 
    {
        vector<int> pos = {0, 0};   
        set<vector<int>> visited;

        visited.insert(pos); 

        for (char c: path){
            if (c == 'N') pos[1]++; 
            else if (c == 'S') pos[1]--; 
            else if (c == 'E') pos[0]++; 
            else if (c == 'W') pos[0]--; 

            if (visited.find(pos) != visited.end()) return true; 

            visited.insert(pos);  
        }    

        return false; 
    }
};