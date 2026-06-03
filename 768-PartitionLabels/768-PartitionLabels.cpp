// Last updated: 6/3/2026, 11:30:36 PM
class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        map<char, int> mpp; 
        for (int i = 0; i < (int)s.size(); i++)
            mpp[s[i]] = i;                      

        int start=0, end=mpp[s[start]];
        vector<int> ans;  
        while (start < s.size()){
            for (int i=start; i<=end; i++){
                int lastIdx = mpp[s[i]]; 
                if (lastIdx > end) end = lastIdx; 
            }

            ans.push_back(end-start+1); 
            start = end+1; 
            if (start < (int)s.size()) end = mpp[s[start]]; 
        }

        return ans;
    }
};