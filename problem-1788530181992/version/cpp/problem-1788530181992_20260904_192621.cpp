// Last updated: 9/4/2026, 7:26:21 PM
1class Solution {
2public:
3    int leastInterval(vector<char>& tasks, int n) {
4        map<char, int> mpp; 
5        for (char i: tasks) mpp[i]++; 
6
7        priority_queue<int> pq; 
8        for (auto i: mpp) pq.push(i.second); 
9
10        int count=0; 
11        while (!pq.empty()) {
12            vector<int> temp; 
13            int cycle = n+1; 
14
15            while (cycle > 0 && !pq.empty()) {
16                int top = pq.top(); pq.pop(); 
17                cycle--; 
18                if (top - 1 > 0) temp.push_back(top-1); 
19                count++; 
20            }
21
22            for (int i: temp) pq.push(i); 
23            if (!pq.empty()) count += cycle; 
24        }
25
26        return count; 
27    }
28};