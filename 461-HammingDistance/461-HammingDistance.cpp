// Last updated: 7/9/2026, 11:58:58 PM
class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        int num = x^y; 
        int count=0; 
        for (int i=0; i<32; i++)    
            if (num & (1<<i)) count++; 
        
        return count; 
    }
};