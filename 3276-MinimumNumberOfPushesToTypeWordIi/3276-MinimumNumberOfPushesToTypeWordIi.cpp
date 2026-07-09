// Last updated: 7/9/2026, 11:52:41 PM
class Solution {
public:
    int minimumPushes(string word) 
    {
        unordered_map<char, int> mpp; 
        for (char c : word) mpp[c]++; 

        if (mpp.size() <= 8) return word.size(); 
        
        vector<int> count; 
        for (auto i: mpp) count.push_back(i.second); 

        sort(count.begin(), count.end()); 

        int ans=0, val=0, a=0;
        for (int i=count.size()-1; i>=0; i--)
        {
            if (a%8 == 0) val++; 
            ans += count[i]*val; 
            a++; 
        }    

        return ans; 
    }
};