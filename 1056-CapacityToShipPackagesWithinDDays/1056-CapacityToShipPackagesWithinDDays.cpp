// Last updated: 6/7/2026, 6:25:53 PM
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int sum=0, maxi=INT_MIN; 
        for (int i: weights){
            sum += i; 
            maxi = max(maxi, i); 
        }

        int left = maxi, right = sum, best=INT_MAX; 
        while (left <= right){
            int capacity = left + (right-left)/2; 
            
            int count=1; 
            int currSum=0;

            for (int i: weights){
                if (currSum + i <= capacity) currSum += i; 
                else{
                    count++; 
                    currSum=i; 
                }
            }
            if (count <= days){
                best = min(best, capacity); 
                right = capacity-1; 
            }
            else left = capacity+1; 
        }

        return best; 
    }
};