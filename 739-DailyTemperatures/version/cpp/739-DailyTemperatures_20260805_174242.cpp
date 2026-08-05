// Last updated: 8/5/2026, 5:42:42 PM
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) 
4    {
5        vector<int> ans(temperatures.size(), 0);
6        stack<int> st;  
7        for (int i=temperatures.size()-1; i>=0; i--){
8            while (!st.empty() && temperatures[st.top()] <= temperatures[i])
9                st.pop(); 
10
11            if (st.empty()) ans[i] = 0; 
12            else ans[i] = st.top() - i; 
13            st.push(i); 
14        }
15
16        return ans; 
17    }
18};