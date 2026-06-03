// Last updated: 6/3/2026, 11:32:13 PM
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int ans=INT_MAX, sum=0, left=0; 
        for (int right=0; right<nums.size(); right++){
            sum += nums[right]; 
            
            while (sum >= target){
                ans = min(ans, right-left+1);
                sum -= nums[left]; 
                left++; 
            }
        } 

        return ans == INT_MAX ? 0 : ans;    
    }
};