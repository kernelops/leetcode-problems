// Last updated: 7/2/2026, 11:08:37 PM
1class Solution {
2public:
3    string kthDistinct(vector<string>& arr, int k) 
4    {
5        unordered_map<string, int> mpp; 
6        for (string i: arr) mpp[i]++; 
7
8        for (string i: arr){
9            if (mpp[i] == 1) k--; 
10            if (k == 0) return i;  
11        }
12
13        return "";    
14    }
15};