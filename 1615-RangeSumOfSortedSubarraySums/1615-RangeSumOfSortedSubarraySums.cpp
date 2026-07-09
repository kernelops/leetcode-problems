// Last updated: 7/9/2026, 11:56:42 PM
class Solution {
public:
    void subarraySum(vector<int> &nums, vector<int> &sumSubArray){
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                sumSubArray.push_back(sum);
            }
        }
    }

    int rangeSum(vector<int>& nums, int n, int left, int right) 
    {   
        const int MOD = 1e9 + 7;
        vector<int> subArraySum; 
        subarraySum(nums, subArraySum); 

        sort(subArraySum.begin(), subArraySum.end()); 

        long long ans=0; 
        for (int i=left-1; i<right; i++) ans = (ans + subArraySum[i]) % MOD; 
        
        return ans; 
    }
};