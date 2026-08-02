// Last updated: 8/2/2026, 9:56:33 AM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) 
4    {
5        sort(nums.begin(), nums.end()); 
6        
7        set<vector<int>> st; 
8        for (int i=0; i<nums.size(); i++){
9            int l = i+1, r = nums.size()-1; 
10            while (l < r){
11                int sum = nums[i] + nums[l] + nums[r]; 
12                if (sum == 0){
13                    st.insert({nums[l], nums[r], nums[i]}); 
14                    l++; r--; 
15                }
16                else if (sum < 0) l++;
17                else r--; 
18            }
19        }  
20
21        return vector<vector<int>> (st.begin(), st.end());   
22    }
23};