// Last updated: 8/6/2026, 8:22:54 PM
1class Solution {
2public:
3    int mySqrt(int x) 
4    {
5        if (x == 1) return 1; 
6        int left = 0, right = x; 
7        int mid = 0; 
8        while (left <= right){
9            mid = left + (right-left)/2;
10            long long product = 1LL * mid * mid;  
11
12            if (product == x) return mid; 
13            if (product > x){
14                right = mid-1; 
15            }
16            else left = mid+1; 
17        }
18
19        return right; 
20    }
21};