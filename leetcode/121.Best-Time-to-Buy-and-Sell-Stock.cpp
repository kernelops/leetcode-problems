class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int buy_price=prices[0]; int maxi=0;

        for(int i=1; i<prices.size(); i++){
            if (prices[i] < buy_price)
                buy_price = prices[i]; 
            else{
                int profit = prices[i] - buy_price; 
                maxi = max(maxi, profit); 
            }
        }

        return maxi;
    }
};