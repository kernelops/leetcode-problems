// Last updated: 6/3/2026, 11:34:13 PM
class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int currentBoundary = 0;
        int farthest = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            farthest = max(farthest, i + nums[i]);

            if (i == currentBoundary) {
                jumps++;
                currentBoundary = farthest;
            }
        }
        return jumps;
    }
};