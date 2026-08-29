// Last updated: 8/29/2026, 9:03:01 PM
1class Solution {
2public:
3    int maxValidSplits(vector<int>& nums) 
4    {
5        int ans=0; 
6        int n = nums.size(); 
7        for (int x=-1; x<n; x++){
8            vector<int> arr; 
9            for (int i=0; i<n; i++) 
10                if (i != x) arr.push_back(nums[i]); 
11
12            if (arr.size() < 2) continue; 
13
14            vector<int> prefix(arr.size()); 
15            prefix[0] = arr[0]; 
16
17            for (int i=1; i<arr.size(); i++)
18                prefix[i] = gcd(prefix[i-1], arr[i]); 
19
20            vector<int> suffix(arr.size()); 
21            suffix[arr.size()-1] = arr[arr.size()-1]; 
22            for (int i=arr.size()-2; i>=0; i--)
23                suffix[i] = gcd(suffix[i+1], arr[i]); 
24
25            int count=0; 
26            for (int i=0; i<prefix.size()-1; i++)
27                if (prefix[i] == suffix[i+1]) count++; 
28
29            ans = max(ans, count); 
30        }  
31
32        return ans; 
33    }
34};