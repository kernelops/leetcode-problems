// Last updated: 8/10/2026, 9:17:59 AM
1class Solution {
2public:
3    int lastStoneWeight(vector<int>& stones) 
4    {
5        priority_queue<int> pq; 
6        for (int i: stones) pq.push(i); 
7
8        while (pq.size() > 1){
9            int a = pq.top(); pq.pop(); 
10            int b = pq.top(); pq.pop(); 
11
12            if (a == b) continue; 
13            else{
14                pq.push(a-b); 
15            }
16        }    
17
18        if (pq.empty()) return 0; 
19        return pq.top(); 
20    }
21};