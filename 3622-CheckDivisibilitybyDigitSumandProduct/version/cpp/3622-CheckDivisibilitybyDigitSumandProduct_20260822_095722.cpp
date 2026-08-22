// Last updated: 8/22/2026, 9:57:22 AM
1class Solution {
2public:
3    bool checkDivisibility(int n) 
4    {
5        int sum=0, prod=1, temp=n; 
6        while (n>0){
7            int d = n%10; 
8            sum += d; 
9            prod *= d; 
10            n /= 10; 
11        }    
12
13        int val = temp / (sum+prod); 
14        if (val * (sum+prod) == temp) return true; 
15        return false;
16    }
17};