// Last updated: 7/9/2026, 11:56:06 PM
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) 
    {
        unordered_map<string, int> mpp; 
        for (string i: arr) mpp[i]++; 

        for (string i: arr){
            if (mpp[i] == 1) k--; 
            if (k == 0) return i;  
        }

        return "";    
    }
};