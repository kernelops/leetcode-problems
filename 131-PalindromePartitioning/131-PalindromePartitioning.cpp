// Last updated: 7/10/2026, 12:01:01 AM
class Solution {
public:
    bool isPalindrome(string s, int start, int end){
        while (start < end){
            if (s[start] != s[end]) return false; 
            start++; end--; 
        }

        return true; 
    }
    void backtrack(string s, vector<string> &curr, vector<vector<string>> &ans, int start){
        // base case
        if (start == s.size()){
            ans.push_back(curr); 
            return;
        }
        
        // recursion 
        for (int end=start; end<s.size(); end++){ 
            if (isPalindrome(s, start, end)){
                curr.push_back(s.substr(start, end-start+1));
                
                backtrack(s, curr, ans, end+1); 

                curr.pop_back(); // backtrack
            }
        }
    }
    vector<vector<string>> partition(string s) 
    {
        vector<string> curr; 
        vector<vector<string>> ans;
        backtrack(s, curr, ans, 0);  

        return ans; 
    }
};