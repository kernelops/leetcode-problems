// Last updated: 6/12/2026, 11:44:05 PM
class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        vector<int> copy; 
        for (int i: heights) copy.push_back(i); 
        sort(copy.begin(), copy.end()); 

        int count=0; 
        for (int i=0; i<heights.size(); i++)  
            if (heights[i] != copy[i]) count++; 

        return count;   
    }
};