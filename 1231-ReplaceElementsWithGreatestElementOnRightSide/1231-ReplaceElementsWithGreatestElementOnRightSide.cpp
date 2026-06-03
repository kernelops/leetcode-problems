// Last updated: 6/3/2026, 11:29:54 PM
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        int maxRight = -1; vector<int> ans(arr.size()); 

        for (int i = arr.size()-1; i>=0; i--){
            ans[i] = maxRight; 
            maxRight = max(maxRight, arr[i]); 
        }    

        return ans; 
    }
};