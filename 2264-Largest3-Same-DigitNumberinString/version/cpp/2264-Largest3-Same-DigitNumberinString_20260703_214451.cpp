// Last updated: 7/3/2026, 9:44:51 PM
1class Solution {
2public:
3    string largestGoodInteger(string num) 
4    {
5        int ptr0=0, ptr1=1, ptr2=2; 
6        int ans=0; bool flag=false; 
7
8        while (ptr2 < num.size()){
9            if (num[ptr0] == num[ptr2] && num[ptr1] == num[ptr2]){
10                flag = true; 
11                ans = max(ans, num[ptr0]-'0'); 
12            }
13            ptr0++; ptr1++; ptr2++; 
14        }    
15
16        if (!flag) return ""; 
17
18        string fin = "";
19        char c = char(ans + '0');
20
21        fin += c;
22        fin += c;
23        fin += c;
24
25        return fin;
26    }
27};