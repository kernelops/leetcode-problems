// Last updated: 6/26/2026, 7:13:32 PM
class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) 
    {
        unordered_map<int, int> mpp; 
        for (int i=0; i<x.size(); i++){
            if (!mpp[x[i]]) mpp[x[i]] = y[i]; 
            else{
                if (mpp[x[i]] < y[i]) mpp[x[i]] = y[i]; 
            }
        }    

        if(mpp.size() < 3) return -1; 

        int ans=0; 
        for (int i=0; i<3; i++){
            int maxi=0, val=0; 
            for (auto i: mpp){
                if (i.second > maxi){
                    maxi = i.second; 
                    val = i.first; 
                }
            }
            ans += maxi; 
            mpp.erase(val); 
        }

        return ans; 
    }
};