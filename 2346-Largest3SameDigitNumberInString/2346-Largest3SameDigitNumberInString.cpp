// Last updated: 7/9/2026, 11:55:52 PM
class Solution {
public:
    string largestGoodInteger(string num) 
    {
        int ptr0=0, ptr1=1, ptr2=2; 
        int ans=0; bool flag=false; 

        while (ptr2 < num.size()){
            if (num[ptr0] == num[ptr2] && num[ptr1] == num[ptr2]){
                flag = true; 
                ans = max(ans, num[ptr0]-'0'); 
            }
            ptr0++; ptr1++; ptr2++; 
        }    

        if (!flag) return ""; 

        string fin = "";
        char c = char(ans + '0');

        fin += c;
        fin += c;
        fin += c;

        return fin;
    }
};