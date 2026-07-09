// Last updated: 7/10/2026, 12:00:23 AM
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) 
    {
        int shift = 0; 
        while (left != right){
            left = left >> 1; 
            right = right >> 1; 
            shift ++; 
        }    

        return left << shift; 
    }
};