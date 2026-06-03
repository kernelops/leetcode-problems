// Last updated: 6/3/2026, 11:34:43 PM
class Solution {
public:
    void solve(int i, vector<string> &arr, vector<string> &ans, string str)
    {
        // Base case
        if (i == arr.size())
        {
            ans.push_back(str);
            return;
        }
        
        for (char c: arr[i])
        {            
            str.push_back(c);
            solve (i+1, arr, ans, str);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        vector<string> letters = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        vector<string> fin;
        for (int i = 0; i < digits.size(); i++)
        {
            int idx = (digits[i] - '0') - 2;  
            fin.push_back(letters[idx]);
        }

        vector<string> ans; string str="";
        solve(0, fin, ans, str);
        return ans;
    }
};