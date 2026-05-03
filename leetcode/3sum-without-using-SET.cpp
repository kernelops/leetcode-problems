class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end()); 

        //set<vector<int>> st;
        vector<vector<int>> ans;
        for (int i=0; i<nums.size()-2; i++){
            if (i > 0 && nums[i] == nums[i-1]) continue; // to skip duplicate
            int left = i+1; 
            int right = nums.size()-1; 

            while (left < right){
                if (nums[i] + nums[left] + nums[right] == 0){
                    //st.insert({nums[i], nums[left], nums[right]}); 
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++; right--; 
                    while (left < right && nums[left] == nums[left-1]) left++;
                    while (left < right && nums[right] == nums[right+1]) right --; 
                }
                else if (nums[i] + nums[left] + nums[right] < 0) left++; 
                else right--; 
            }
        }  
        //return vector<vector<int>>(st.begin(), st.end());
    }
};