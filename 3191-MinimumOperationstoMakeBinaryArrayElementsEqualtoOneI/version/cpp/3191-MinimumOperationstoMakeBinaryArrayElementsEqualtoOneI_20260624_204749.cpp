// Last updated: 6/24/2026, 8:47:49 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums) 
4    {
5        int ptr1=0, ptr2=1, ptr3=2, count=0; 
6        if (nums.size() < 3) return -1; 
7
8        while (ptr3 < nums.size()){
9            if (!nums[ptr1]){
10                count++; 
11                nums[ptr1] ? nums[ptr1]=0 : nums[ptr1]=1;
12                nums[ptr2] ? nums[ptr2]=0 : nums[ptr2]=1;
13                nums[ptr3] ? nums[ptr3]=0 : nums[ptr3]=1; 
14            }
15            ptr1++; ptr2++; ptr3++; 
16        }    
17
18        vector<int> ref(nums.size(), 1); 
19        if (nums == ref) return count; 
20        return -1; 
21    }
22};