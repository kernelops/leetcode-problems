// Last updated: 7/9/2026, 11:53:04 PM
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) 
    {
        int ans=0;
        if (nums2.size() % 2 == 0){
            if (nums1.size() % 2 == 0) return 0; 
            else{
                for (int i: nums2) ans = ans^i; 
            }
        }    
        else{
            if (nums1.size() % 2 != 0){
                for (int i: nums2) ans = ans^i; 
                for (int i: nums1) ans = ans^i; 
            }
            else{
                for (int i: nums1) ans = ans^i; 
            }
        }

        return ans;
    }
};