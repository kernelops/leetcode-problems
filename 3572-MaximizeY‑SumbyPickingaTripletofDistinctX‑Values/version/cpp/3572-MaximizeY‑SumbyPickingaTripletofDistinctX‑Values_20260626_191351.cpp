// Last updated: 6/26/2026, 7:13:51 PM
1class Solution {
2public:
3    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) 
4    {
5        unordered_map<int, int> mpp; 
6        for (int i=0; i<x.size(); i++){
7            if (!mpp[x[i]]) mpp[x[i]] = y[i]; 
8            else{
9                if (mpp[x[i]] < y[i]) mpp[x[i]] = y[i]; 
10            }
11        }    
12
13        if(mpp.size() < 3) return -1; 
14
15        int ans=0; 
16        for (int i=0; i<3; i++){
17            int maxi=0, val=0; 
18            for (auto i: mpp){
19                if (i.second > maxi){
20                    maxi = i.second; 
21                    val = i.first; 
22                }
23            }
24            ans += maxi; 
25            mpp.erase(val); 
26        }
27
28        return ans; 
29    }
30};