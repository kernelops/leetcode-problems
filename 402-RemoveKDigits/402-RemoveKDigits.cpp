// Last updated: 7/10/2026, 1:33:09 AM
class Solution {
public:
    string removeKdigits(string num, int k) 
    {
        if (num.size() == k) return "0"; 

        stack<int> st; 

        for (int i=0; i<num.size(); i++){
            char c = num[i]; 

            while (!st.empty() && k > 0 && st.top() > (c-'0')){
                st.pop(); 
                k--; 
            }

            st.push(c-'0');
        }    
        while (!st.empty() && k>0){
            st.pop(); 
            k--; 
        }

        string ans=""; 
        while (!st.empty())
        {
            ans += char(st.top() + '0');
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        int x = 0;
        while (x < ans.size() && ans[x] == '0')
            x++;

        if (x == ans.size())
            return "0";

        return ans.substr(x);
    }
};