// Last updated: 6/3/2026, 11:32:21 PM
class Solution {
public:
    int countPrimes(int n) 
    {
        if (n <= 2) return 0; 

        vector<int> nums(n, 1);
        nums[0] = 0;
        nums[1] = 0;

        for (int i = 2; i*i < n; i++)  // or for (int i = 2; i < n; i++)
        {
            if (nums[i] == 1)
            {
                for (int j = i * i; j < n; j += i)  // or for (int j = 2 * i; j < n; j += i)
                    nums[j] = 0;
            }
        }

        int count = 0;
        for (int i = 0; i < n; i++)
            if (nums[i] == 1) count++;

        return count;
    }
};
