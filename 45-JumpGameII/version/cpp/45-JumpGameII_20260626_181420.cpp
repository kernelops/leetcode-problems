// Last updated: 6/26/2026, 6:14:20 PM
1class Solution {
2public:
3    int jump(vector<int>& nums) {
4        int jumps = 0;
5        int currentBoundary = 0;
6        int farthest = 0;
7
8        for (int i = 0; i < nums.size() - 1; i++) {
9            farthest = max(farthest, i + nums[i]);
10
11            if (i == currentBoundary) {
12                jumps++;
13                currentBoundary = farthest;
14            }
15        }
16        return jumps;
17    }
18};