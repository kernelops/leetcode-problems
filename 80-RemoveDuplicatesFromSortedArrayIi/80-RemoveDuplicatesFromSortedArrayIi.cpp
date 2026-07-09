// Last updated: 7/10/2026, 12:01:43 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        map<int, int> mpp; 
        for (int n: nums) mpp[n]++; 

        int a=0; 
        for (auto i: mpp){
            if (i.second>=2){
                nums[a++] = i.first; 
                nums[a++] = i.first; 
            }
            else if (i.second == 1) nums[a++] = i.first; 
        }

        return a; 
    }
};