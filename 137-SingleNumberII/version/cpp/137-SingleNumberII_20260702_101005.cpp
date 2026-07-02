// Last updated: 7/2/2026, 10:10:05 AM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums){
4        int ans=0; 
5
6        for (int i=0; i<32; i++){
7            int count=0; 
8            for (int x: nums){
9                if (x & (1 << i))
10                    count++; 
11            }
12            if (count % 3 == 1) ans = ans | (1<<i); 
13        }
14
15        return ans; 
16    }
17};