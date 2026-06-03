// Last updated: 6/3/2026, 11:29:20 PM
class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int x = start ^ goal;

        int count=0;
        while (x>0)
        {
            if (x&1) count++;
            x = x>>1;
        }    
        return count;
    }
};