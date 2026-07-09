// Last updated: 7/9/2026, 11:52:37 PM
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) 
    {
        if (nums.size() == 1) return true; 

        for (int i=1; i<nums.size(); i++){
            if (nums[i] % 2 == 0){
                if (nums[i-1] % 2 == 0) return false; 
            }

            if (nums[i] % 2 != 0){
                if (nums[i-1] % 2 != 0) return false; 
            }
        }  

        return true;   
    }
};