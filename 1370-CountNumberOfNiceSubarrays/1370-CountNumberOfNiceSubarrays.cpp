// Last updated: 6/3/2026, 11:29:51 PM
class Solution {
public:
    int answer(vector<int>& nums, int k)
    {
        int l=0, r=0, count=0, sum=0;
        if (k<0) return 0;
        while (r<nums.size())
        {
            sum += nums[r];
            r++; 
            if (sum <= k) count += (r-l);
            while(sum > k)
            {
                sum -= nums[l]; 
                l++;
                if (sum == k) count += (r-l);
            }
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
        vector<int> arr;
        for (int i: nums)
        {
            if (i%2 == 0) arr.push_back(0);
            else arr.push_back(1);
        }
        return answer(arr, k) - answer(arr, k-1);
    }
};