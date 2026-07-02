// Last updated: 7/2/2026, 11:05:16 PM
1class Solution {
2public:
3    string kthDistinct(vector<string>& arr, int k) 
4    {
5        unordered_map<string, int> mpp; 
6        for (string i: arr) mpp[i]++; 
7
8        vector<string> distinct; 
9        for (auto i: mpp) 
10            if (i.second == 1) distinct.push_back(i.first); 
11
12        priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq; 
13
14        for (string i: distinct){
15            for (int j=0; j<arr.size(); j++)
16                if (arr[j] == i) pq.push({j, i}); 
17        }    
18
19        while (!pq.empty()){
20            auto node = pq.top(); 
21            if (k == 1) return node.second;  
22            pq.pop(); 
23            k--; 
24        }
25
26        return ""; 
27    }
28};