// Last updated: 6/26/2026, 1:42:55 PM
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end()); 

        int ans=0, prev = nums[0]; 
        for (int i=1; i<nums.size(); i++){
            if (nums[i] <= prev){
                ans += (prev - nums[i] + 1);
                prev += 1; 
            }
            else prev = nums[i];  
        }   

        return ans; 

    }
};