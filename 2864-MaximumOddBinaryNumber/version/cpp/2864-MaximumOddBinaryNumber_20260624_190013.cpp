// Last updated: 6/24/2026, 7:00:13 PM
1class Solution {
2public:
3    string maximumOddBinaryNumber(string s) 
4    {
5        int size = s.size(); 
6        int countOne=0; 
7        for (char c: s) if (c == '1') countOne++; 
8
9        string ans=""; int temp = countOne; 
10        while (countOne > 1){
11            ans += '1'; 
12            countOne--; 
13        }
14
15        for (int i=0; i<size-temp; i++){
16            ans += '0'; 
17        }
18        ans += '1'; 
19
20        return ans; 
21    }
22};