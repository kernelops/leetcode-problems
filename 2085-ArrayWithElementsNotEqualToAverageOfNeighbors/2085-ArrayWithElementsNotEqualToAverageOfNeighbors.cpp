// Last updated: 7/9/2026, 11:56:08 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {   
        if (nums.size() < 3) return nums; 
        if (nums.size() == 3){
            if (nums[1]*2 == (nums[0]+nums[2]))
                swap(nums[2], nums[1]); 
            return nums; 
        }

        for (int i=1; i<nums.size()-1; i++){
            int left = nums[i-1], right = nums[i+1]; 
            if (2*nums[i] == (left+right)){
                if (i <= nums.size()-3)
                    swap(nums[i+1], nums[i+2]); 
                else{
                    swap(nums[i+1], nums[0]); 
                    swap(nums[0], nums[1]); 
                }
            }
        }    

        return nums; 
    }
};