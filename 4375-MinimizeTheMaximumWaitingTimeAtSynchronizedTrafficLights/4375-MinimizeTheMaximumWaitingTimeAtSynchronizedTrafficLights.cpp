// Last updated: 8/21/2026, 12:14:14 AM
class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) 
    {
        int ans = 0; 
        int maxLight = INT_MIN;
        for (int light: lights) maxLight = max(maxLight, light); 

        for (int t: arrivalTime){
            int r = t % period; 
            int wait = period - r; 

            if (r < maxLight) {
                wait = 0; 
                continue;
            }

            ans = max(ans, wait); 
        }

        return ans; 
    }
};