// Last updated: 7/8/2026, 11:57:15 PM
1class Solution {
2public:
3    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
4    {
5        unordered_map<int, int> mpp1; 
6        unordered_map<int, int> mpp2; 
7
8        for (int i: nums1) mpp1[i]++; 
9        for (int i: nums2){
10            mpp2[i]++;    
11            if (mpp1.find(i) != mpp1.end()) mpp1.erase(i);  
12        }
13
14        for (int i: nums1) if (mpp2.find(i) != mpp2.end()) mpp2.erase(i); 
15        vector<vector<int>> ans; 
16
17        vector<int> temp2; 
18        for (auto i: mpp1) temp2.push_back(i.first);
19        sort(temp2.begin(), temp2.end()); 
20        ans.push_back(temp2); 
21
22        vector<int> temp; 
23        for (auto i: mpp2) temp.push_back(i.first); 
24        sort(temp.begin(), temp.end());
25        ans.push_back(temp); 
26
27        return ans; 
28    }
29};