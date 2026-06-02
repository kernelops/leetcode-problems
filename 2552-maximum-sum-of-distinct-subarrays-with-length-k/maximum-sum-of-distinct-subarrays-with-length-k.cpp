class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) 
    {
        map<int, int> mpp; long long sum=0; 
        for(int i=0; i<k; i++){
            mpp[nums[i]]++; 
            sum += nums[i]; 
        }

        long long ans=0; int left=0; 
        if (mpp.size() == k) ans = sum; 
        for (int right=k; right<nums.size(); right++){
            mpp[nums[right]]++; 
            mpp[nums[left]]--; 
            if (mpp[nums[left]] == 0) mpp.erase(nums[left]);
            sum += nums[right]; sum -= nums[left]; 
            if (mpp.size() == k) ans = max(ans, sum);  

            left++; 
        }

        return ans; 
    }
};