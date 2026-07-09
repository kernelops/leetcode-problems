// Last updated: 7/9/2026, 11:57:06 PM
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int, int> mpp1; 
        unordered_map<int, int> mpp2; 

        for (int i: nums1) mpp1[i]++; 
        for (int i: nums2){
            mpp2[i]++;    
            if (mpp1.find(i) != mpp1.end()) mpp1.erase(i);  
        }

        for (int i: nums1) if (mpp2.find(i) != mpp2.end()) mpp2.erase(i); 
        vector<vector<int>> ans; 

        vector<int> temp2; 
        for (auto i: mpp1) temp2.push_back(i.first);
        sort(temp2.begin(), temp2.end()); 
        ans.push_back(temp2); 

        vector<int> temp; 
        for (auto i: mpp2) temp.push_back(i.first); 
        sort(temp.begin(), temp.end());
        ans.push_back(temp); 

        return ans; 
    }
};