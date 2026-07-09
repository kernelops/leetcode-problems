// Last updated: 7/9/2026, 11:58:33 PM
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int n = nums.size(); 
        sort(nums.begin(), nums.end()); 

        int duplicate = -1;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                duplicate = nums[i];
                break;
            }
        }    

        int total_sum=0; 
        for (int i: nums) total_sum += i; 

        int missing = (n*(n+1)/2) - total_sum + duplicate; 

        return {duplicate, missing};
    }
};