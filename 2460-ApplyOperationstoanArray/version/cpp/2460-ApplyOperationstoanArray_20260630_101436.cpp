// Last updated: 6/30/2026, 10:14:36 AM
1class Solution {
2public:
3    vector<int> applyOperations(vector<int>& nums) 
4    {
5        for (int i=0; i<nums.size()-1; i++){
6            if (nums[i] == nums[i+1]){
7                nums[i] = nums[i]*2; 
8                nums[i+1] = 0; 
9            }
10        }    
11
12        int ptr=0; 
13        for (int i=0; i<nums.size(); i++)
14            if (nums[i] != 0) nums[ptr++] = nums[i]; 
15        
16        for (int i=ptr; i<nums.size(); i++)
17            nums[i] = 0; 
18        
19        return nums; 
20    }
21};