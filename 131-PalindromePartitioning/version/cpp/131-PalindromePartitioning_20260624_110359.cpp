// Last updated: 6/24/2026, 11:03:59 AM
1class Solution {
2public:
3    bool isPalindrome(string s, int start, int end){
4        while (start < end){
5            if (s[start] != s[end]) return false; 
6            start++; end--; 
7        }
8
9        return true; 
10    }
11    void backtrack(string s, vector<string> &curr, vector<vector<string>> &ans, int start){
12        // base case
13        if (start == s.size()){
14            ans.push_back(curr); 
15            return;
16        }
17        
18        // recursion 
19        for (int end=start; end<s.size(); end++){ 
20            if (isPalindrome(s, start, end)){
21                curr.push_back(s.substr(start, end-start+1));
22                
23                backtrack(s, curr, ans, end+1); 
24
25                curr.pop_back(); // backtrack
26            }
27        }
28    }
29    vector<vector<string>> partition(string s) 
30    {
31        vector<string> curr; 
32        vector<vector<string>> ans;
33        backtrack(s, curr, ans, 0);  
34
35        return ans; 
36    }
37};