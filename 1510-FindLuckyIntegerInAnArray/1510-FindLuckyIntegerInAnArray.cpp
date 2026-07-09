// Last updated: 7/9/2026, 11:56:59 PM
class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        unordered_map<int, int> mpp; 
        for (int i: arr) mpp[i]++; 

        int ans=INT_MIN; 
        for (auto i: mpp){
            if (i.first == i.second)
                ans = max(ans, i.first); 
        }    

        return (ans == INT_MIN) ? -1 : ans; 
    }
};