// Last updated: 7/1/2026, 7:12:50 AM
1class Solution {
2public:
3    string toBinary(int n){
4        string ans=""; 
5        while (n > 0){
6            if (n%2 == 1) ans += '1'; 
7            else ans += '0'; 
8            n /= 2; 
9        }
10        reverse(ans.begin(), ans.end()); 
11
12        return ans; 
13    }
14    int hammingWeight(int n) 
15    {
16        string bin = toBinary(n);
17        int count=0;  
18        for (char c: bin){
19            int bit = c - '0';
20            if (bit == 1) count++;  
21        }
22
23        return count; 
24    }
25};