// Last updated: 6/3/2026, 11:29:35 PM
    class Solution {
    public:
        int minOperations(vector<int>& nums, int x) 
        {
            int sum=0; 
            for(int i: nums) sum += i; 

            int subarraySum = sum-x;

            if (subarraySum < 0) return -1;
            if (subarraySum == 0) return nums.size(); 
            
            int left=0; int val=0; int maxi=INT_MIN; 
            for (int right=0; right<nums.size(); right++){
                val += nums[right];

                while (val > subarraySum){
                    val -= nums[left]; 
                    left++; 
                }
                
                if (val == subarraySum) maxi = max(maxi, right-left+1);
            }

            return (maxi == INT_MIN) ? -1 : nums.size()-maxi;  
        }
    };