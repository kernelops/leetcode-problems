// Last updated: 6/27/2026, 9:26:37 PM
1class Solution {
2public:
3    void subarraySum(vector<int> &nums, vector<int> &sumSubArray){
4        for (int i = 0; i < nums.size(); i++) {
5            int sum = 0;
6            for (int j = i; j < nums.size(); j++) {
7                sum += nums[j];
8                sumSubArray.push_back(sum);
9            }
10        }
11    }
12
13    int rangeSum(vector<int>& nums, int n, int left, int right) 
14    {   
15        const int MOD = 1e9 + 7;
16        vector<int> subArraySum; 
17        subarraySum(nums, subArraySum); 
18
19        sort(subArraySum.begin(), subArraySum.end()); 
20
21        long long ans=0; 
22        for (int i=left-1; i<right; i++) ans = (ans + subArraySum[i]) % MOD; 
23        
24        return ans; 
25    }
26};