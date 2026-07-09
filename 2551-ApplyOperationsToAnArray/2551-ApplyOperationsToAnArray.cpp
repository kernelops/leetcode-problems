// Last updated: 7/9/2026, 11:53:03 PM
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) 
    {
        for (int i=0; i<nums.size()-1; i++){
            if (nums[i] == nums[i+1]){
                nums[i] = nums[i]*2; 
                nums[i+1] = 0; 
            }
        }    

        int ptr=0; 
        for (int i=0; i<nums.size(); i++)
            if (nums[i] != 0) nums[ptr++] = nums[i]; 
        
        for (int i=ptr; i<nums.size(); i++)
            nums[i] = 0; 
        
        return nums; 
    }
};