// Last updated: 8/23/2026, 9:21:43 AM
1class Solution {
2public:
3    vector<int> primeFactors(int x) {
4        vector<int> factors;
5        for (int p = 2; p * p <= x; p++) {
6
7            if (x % p == 0) {
8                factors.push_back(p);
9
10                while (x % p == 0)
11                    x /= p;
12            }
13        }
14        if (x > 1)
15            factors.push_back(x);
16
17        return factors;
18    }
19    int longestSubarray(vector<int>& nums, int k) 
20    {
21        int l=0, r=0, ans=0; 
22        unordered_map<int, int> freq; 
23
24        while (r < nums.size()){
25            vector<int> pf = primeFactors(nums[r]);
26
27            for (int i: pf) freq[i]++; 
28
29            while (freq.size() > k){
30                pf = primeFactors(nums[l]);
31                for (int i: pf){
32                    freq[i]--; 
33                    if (freq[i] == 0) freq.erase(i); 
34                }
35                l++; 
36            }
37            ans = max(ans, r-l+1); 
38            r++; 
39        }
40        return ans; 
41    }
42};