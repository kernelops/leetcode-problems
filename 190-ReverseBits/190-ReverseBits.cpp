// Last updated: 7/1/2026, 10:03:06 AM
1class Solution {
2public:
3    string toBinary(int n){
4        string ans=""; 
5        while (n>0){
6            if (n%2 == 1) ans += '1'; 
7            else ans += '0'; 
8            n = n/2; 
9        }
10        reverse(ans.begin(), ans.end()); 
11        for (int i=ans.size(); i<32; i++) ans = '0' + ans; 
12        return ans; 
13    }
14
15    int toDecimal(string bin){
16        int decimal=0; 
17        for (char c: bin){
18            int bit = c - '0'; 
19            decimal = decimal * 2 + bit; 
20        }
21
22        return decimal; 
23    }
24    int reverseBits(int n) 
25    {
26        string bin = toBinary(n); 
27        reverse(bin.begin(), bin.end()); 
28        int ans = toDecimal(bin); 
29
30        return ans; 
31    }
32};