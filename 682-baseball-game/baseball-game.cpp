class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        stack<int> st; 
        for (string s: operations){
            if (s == "C"){
                if (!st.empty()) st.pop(); 
            }
            else if (s == "D") st.push(st.top()*2); 
            else if (s == "+"){
                int num1 = st.top(); st.pop(); 
                int num2 = st.top(); st.pop(); 
                st.push(num2); 
                st.push(num1); 
                st.push(num1+num2); 
            }
            else st.push(stoi(s)); 
        }    

        int sum=0;
        while (!st.empty()){
            sum += st.top(); st.pop(); 
        }

        return sum; 
    }
};