// Last updated: 7/9/2026, 11:55:55 PM
class Solution {
public:
    bool divideArray(vector<int>& nums) 
    {
        int pairs = nums.size()/2; 

        sort(nums.begin(), nums.end()); 

        for (int i=1; i<nums.size(); i+=2){
            if (nums[i] != nums[i-1]) return false;
        }    

        return true; 
    }
};