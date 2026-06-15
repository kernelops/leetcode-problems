// Last updated: 6/16/2026, 12:41:13 AM
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        vector<int> ans(code.size(), 0); 
        if (k==0) return ans; 

        int l=1, r=k, sum=0; 

        if (k > 0) {
            l = 1;
            r = k;
        } 
        else {
            k = -k;
            l = code.size() - k;
            r = code.size() - 1;
        }

        for (int i=l; i<=r; i++) sum += code[i%code.size()]; 

        ans[0] = sum; 
        for (int i=1; i<code.size(); i++){
            r = (r+1)%code.size(); 
            sum += code[r]; 
            sum -= code[l];      
            l = (l+1)%code.size(); 

            ans[i] = sum; 
        }

        return ans; 
    }
};