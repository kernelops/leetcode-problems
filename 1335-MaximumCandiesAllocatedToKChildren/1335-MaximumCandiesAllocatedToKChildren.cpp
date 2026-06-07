// Last updated: 6/7/2026, 9:40:37 PM
class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) 
    {
        long long sum=0; int maxi = INT_MIN; 
        for (int i: candies){
            sum += i; 
            maxi = max(maxi, i); 
        }    

        if (sum < k) return 0; 

        int left = 1, right = maxi; int ans = INT_MIN; 
        while (left <= right){
            int mid = left + (right-left)/2; 
            long long val = 0; 
            for (long long i: candies) val += i/mid; 

            if (val < k) right = mid-1; 
            else{
                left = mid+1; 
                ans = max(ans, mid); 
            }
        }

        return ans; 
    }
};