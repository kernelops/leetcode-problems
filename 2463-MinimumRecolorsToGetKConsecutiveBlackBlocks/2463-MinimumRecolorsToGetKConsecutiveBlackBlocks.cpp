// Last updated: 6/3/2026, 11:29:17 PM
class Solution {
public:
    int minimumRecolors(string blocks, int k) 
    {
        int left=0, right=k, count=0;
        for (int i=0; i<k; i++)
            if (blocks[i] == 'W') count++; 

        int mini = count; 
        while (right < blocks.size()){
            if (blocks[right] == 'W') count++; 
            if (blocks[left] == 'W') count--; 
            
            mini = min(mini, count); 
            right++; left++; 
        }    

        return mini; 
    }
};