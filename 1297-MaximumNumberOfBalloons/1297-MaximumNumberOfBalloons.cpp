// Last updated: 7/9/2026, 11:57:25 PM
class Solution {
public:
    int maxNumberOfBalloons(string text) 
    {
        unordered_map<char, int> mpp; 
        for (char c: text) mpp[c]++; 

        int count=0; 
        while(true){
            if (mpp['b']){
                mpp['b']--; 
                if (mpp['a']){
                    mpp['a']--; 
                    if (mpp['l']){
                        mpp['l']--;
                        if(mpp['l']){
                            mpp['l']--; 
                            if (mpp['o']){
                                mpp['o']--; 
                                if (mpp['o']){
                                    mpp['o']--; 
                                    if (mpp['n']){
                                        mpp['n']--; 
                                        count++; 
                                    }
                                    else break; 
                                }
                                else break; 
                            }
                            else break;
                        }
                        else break; 
                    }
                    else break; 
                }
                else break; 
            }
            else break; 
        }    

        return count; 
    }
};