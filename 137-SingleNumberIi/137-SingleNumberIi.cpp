// Last updated: 7/10/2026, 12:00:57 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end()); 

        int ptr = 1; 
        while (ptr < nums.size()){
            if (nums[ptr] == nums[ptr-1] && nums[ptr] == nums[ptr+1]){
                ptr += 3; continue; 
            }
            else return nums[ptr-1]; 
        }    

        return nums[nums.size()-1]; 
    }
};