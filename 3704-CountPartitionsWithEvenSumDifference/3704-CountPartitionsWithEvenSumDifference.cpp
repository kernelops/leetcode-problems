// Last updated: 6/3/2026, 11:49:31 PM
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total = 0;
        for (int x : nums) total += x;

        if (total % 2 != 0) return 0;

        return nums.size() - 1;
    }
};