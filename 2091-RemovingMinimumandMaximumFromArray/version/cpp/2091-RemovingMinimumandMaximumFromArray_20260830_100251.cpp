// Last updated: 8/30/2026, 10:02:51 AM
1class Solution {
2public:
3    int minimumDeletions(vector<int>& nums) 
4    {
5        int mini=INT_MAX, maxi=INT_MIN, miniIdx=0, maxiIdx=0; 
6        for (int i=0; i<nums.size(); i++) {
7            if (nums[i] < mini) {
8                mini = nums[i]; 
9                miniIdx = i; 
10            }
11            if (nums[i] > maxi) {
12                maxi = nums[i]; 
13                maxiIdx = i; 
14            }
15        }    
16
17        int ans = 0, forward=0, backward=0; 
18        if (miniIdx > maxiIdx) {
19            forward = miniIdx; 
20            backward = maxiIdx; 
21        }
22        else {
23            forward = maxiIdx; 
24            backward = miniIdx; 
25        }
26
27        int n = nums.size(); 
28        ans = min (n - (forward-backward)+1, forward+1);
29        ans = min(ans, n - backward);
30
31        return ans;  
32    }
33};