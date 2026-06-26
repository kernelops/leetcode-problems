// Last updated: 6/26/2026, 9:56:54 PM
1class Solution {
2public:
3    int minimumPushes(string word) 
4    {
5        unordered_map<char, int> mpp; 
6        for (char c : word) mpp[c]++; 
7
8        if (mpp.size() <= 8) return word.size(); 
9        
10        vector<int> count; 
11        for (auto i: mpp) count.push_back(i.second); 
12
13        sort(count.begin(), count.end()); 
14
15        int ans=0, val=0, a=0;
16        for (int i=count.size()-1; i>=0; i--)
17        {
18            if (a%8 == 0) val++; 
19            ans += count[i]*val; 
20            a++; 
21        }    
22
23        return ans; 
24    }
25};