// Last updated: 6/26/2026, 1:35:10 PM
class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        int ptr1=0, ptr2=1, ptr3=2, count=0; 
        if (nums.size() < 3) return -1; 

        while (ptr3 < nums.size()){
            if (!nums[ptr1]){
                count++; 
                nums[ptr1] ? nums[ptr1]=0 : nums[ptr1]=1;
                nums[ptr2] ? nums[ptr2]=0 : nums[ptr2]=1;
                nums[ptr3] ? nums[ptr3]=0 : nums[ptr3]=1; 
            }
            ptr1++; ptr2++; ptr3++; 
        }    

        vector<int> ref(nums.size(), 1); 
        if (nums == ref) return count; 
        return -1; 
    }
};