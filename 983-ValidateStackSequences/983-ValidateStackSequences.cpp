// Last updated: 6/3/2026, 11:30:11 PM
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        stack<int> st; int j=0; 
        for (int i: pushed){
            st.push(i); 
            
            while (!st.empty() && j<popped.size() && st.top() == popped[j]){
                j++; 
                st.pop(); 
            }
        }    

        return j == popped.size(); 
    }
};