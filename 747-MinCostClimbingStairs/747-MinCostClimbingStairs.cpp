// Last updated: 8/21/2026, 12:20:41 AM
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        vector<int> dp(cost.size()+1, 0); 
        int prev=0; int prev2=0; 
        for (int i=2; i<=cost.size(); i++){
            int left = prev + cost[i-1]; 
            int right = prev2 + cost[i-2];

            int cur = min(left, right); 
            prev2 = prev; 
            prev = cur; 
        }
        return prev; 
    }
};