// Last updated: 6/23/2026, 11:10:01 AM
class Solution {
public:
    int subsetXORSum(vector<int>& nums) 
    {
        vector<vector<int>> subsets;
        subsets.push_back({});          

        sort(nums.begin(), nums.end()); 

        for (int x : nums) {
            int n = subsets.size();     
            for (int j = 0; j < n; ++j) {
                vector<int> subset = subsets[j];  
                subset.push_back(x);              
                subsets.push_back(subset);        
            }
        }  

        int ans=0; 
        for (auto i: subsets){
            if (i.size() == 1) ans += i[0]; 
            if (i.size() > 1){
                int val=0; 
                for (int j: i){
                    val = val^j; 
                }
                ans += val; 
            }
        }   

        return ans; 
    }
};