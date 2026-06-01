class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) 
    {
        int l=0, r=minutes-1; 
        int sum=0; 
        vector<int> index(2, -1); int maxi = INT_MIN; 
        for (int i=l; i<=r; i++) sum += customers[i]*grumpy[i]; 
        while (true){
            if (sum > maxi){
                maxi = sum; 
                index[0] = l; index[1] = r; 
            } 

            if (r == customers.size() - 1) break;

            r++; 
            sum += customers[r]*grumpy[r];
            sum -= customers[l]*grumpy[l]; 
            l++;  
        }
        int ans=0; 
        for (int i=0; i<grumpy.size(); i++)
        {
            if (i == index[0]){
                for (int j=index[0]; j<=index[1]; j++){
                    ans += customers[j]; 
                }

                i = index[1]; 
            }
            else if (grumpy[i] == 0) ans += customers[i]; 
        }

        return ans; 
    }
};