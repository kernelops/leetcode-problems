// Last updated: 7/1/2026, 9:22:56 AM
1class Solution {
2public:
3    string addBinary(string a, string b) 
4    {
5        int pta=a.size()-1, ptb=b.size()-1, sum=0, carry=0;
6        string ans=""; 
7
8        while (pta >= 0 || ptb >= 0 || carry){
9            int bitA = (pta >= 0) ? a[pta] - '0' : 0; 
10            int bitB = (ptb >= 0) ? b[ptb] - '0' : 0; 
11
12            int sum = bitA + bitB + carry; 
13
14            int sumBit = sum % 2; 
15            carry = sum/2; 
16
17            ans.push_back(sumBit ? '1' : '0'); 
18            pta--; ptb--;  
19        }  
20        reverse(ans.begin(), ans.end()); 
21
22        return ans;  
23    }
24};