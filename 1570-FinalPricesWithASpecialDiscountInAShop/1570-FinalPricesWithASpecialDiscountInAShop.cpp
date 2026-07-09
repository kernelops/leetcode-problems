// Last updated: 7/9/2026, 11:56:47 PM
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) 
    {
        stack<int> st; 
        vector<int> ans (prices.size()); 
        for (int i=prices.size()-1; i>=0; i--){
            if (i == prices.size()-1){
                ans[i] = prices[i]; 
                st.push(prices[i]); 
                continue; 
            }
            
            int val = prices[i]; 
            while (!st.empty() && st.top() > val) st.pop();

            ans[i] = st.empty() ? val : val - st.top();  
            st.push(val);             
        }    
        return ans;
    }
};