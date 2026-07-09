// Last updated: 7/9/2026, 11:57:55 PM
class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        bool inc = true, dec = true;  
        for (int i=1; i<nums.size(); i++){
            if (nums[i] > nums[i-1]) dec = false; 
            else if (nums[i] < nums[i-1]) inc = false; 
        }    

        return inc || dec; 
    }
};