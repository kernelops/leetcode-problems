// Last updated: 6/3/2026, 11:30:22 PM
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        sort(piles.begin(), piles.end());  
    
        int left=1, right=piles[piles.size()-1]; 

        int mini=INT_MAX; 
        while (left <= right){
            int mid = left + (right-left)/2; 

            long long sum=0;
            for (int i=0; i<piles.size(); i++){
                sum += ceil((double)piles[i] / mid); 
            }
            if (sum <= h){
                mini = min(mini, mid);
                right = mid-1;
            }
            else left = mid+1;  
        }

        return mini; 
    }
};