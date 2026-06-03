// Last updated: 6/3/2026, 11:29:07 PM
class Solution {
public:
    int scoreOfString(string s) 
    {
        vector<int> ascii; 
        for (char c: s){
            int num = c; 
            ascii.push_back(num);
        }

        int sum=0; 
        for (int i = 1; i< ascii.size(); i++)
            sum += abs(ascii[i]-ascii[i-1]); 

        return sum;    
    }
};