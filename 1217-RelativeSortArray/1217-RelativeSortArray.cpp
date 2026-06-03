// Last updated: 6/3/2026, 11:29:55 PM
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        map<int, int> mpp; 
        for (int i: arr1) mpp[i]++;     

        vector<int> ans; 
        for (int i: arr2){
            int count = mpp[i]; 
            for (int j=0; j<count; j++){
                ans.push_back(i); 
                mpp[i]--;
            }
            mpp.erase(i); 
        }
        if (!mpp.empty()){
            for (auto i: mpp){
                for (int j=0; j<i.second; j++){
                    ans.push_back(i.first); 
                    mpp[i.first]--;
                }
                mpp.erase(i.first);
            } 
        }

        return ans; 
    }
};