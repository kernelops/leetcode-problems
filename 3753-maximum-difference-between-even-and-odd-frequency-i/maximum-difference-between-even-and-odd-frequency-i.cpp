class Solution {
public:
    int maxDifference(string s) 
    {
        map<char, int> mpp; 
        for (char c: s) mpp[c]++; 

        vector<int> freq;
        for (auto i: mpp)    
            freq.push_back(i.second); 
        
        int maxo=INT_MIN, mino=INT_MAX, maxe=INT_MIN, mine=INT_MAX; 
        for (int i: freq){
            if (i%2 == 0)
                mine = min(mine, i);
            else
                maxo = max(maxo, i); 
        }

        return maxo-mine; 
    }   
};