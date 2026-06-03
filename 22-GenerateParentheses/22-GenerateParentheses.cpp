// Last updated: 6/3/2026, 11:34:36 PM
class Solution {
public:
    void solve(int open, int close, int n, string &par, vector<string> &ans)
    {
        // Base Case
        if (par.size() == 2*n)
        {
            ans.push_back(par);
            return;
        }

        if (open < n)
        {
            par.push_back('(');
            solve(open+1, close, n, par,ans);
            par.pop_back();
        }

        if (close < open)
        {
            par.push_back(')');
            solve(open, close+1, n, par,ans);
            par.pop_back();            
        }
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string> ans;
        string par="";
        solve(0, 0, n, par, ans);    
        return ans;
    }
};