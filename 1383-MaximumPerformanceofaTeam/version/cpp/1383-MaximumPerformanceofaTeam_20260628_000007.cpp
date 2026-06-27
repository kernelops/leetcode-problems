// Last updated: 6/28/2026, 12:00:07 AM
1class Solution {
2public:
3    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
4        const int MOD = 1e9 + 7;
5        vector<pair<int,int>> workers;
6        workers.reserve(n);
7        for (int i = 0; i < n; ++i) {
8            workers.push_back({efficiency[i], speed[i]});
9        }
10        sort(workers.rbegin(), workers.rend()); // by efficiency desc
11
12        long long ans = 0;
13        long long speedSum = 0;
14        priority_queue<int, vector<int>, greater<int>> pq;
15
16        for (auto &w : workers) {
17            int e = w.first;
18            int s = w.second;
19
20            pq.push(s);
21            speedSum += s;
22
23            if ((int)pq.size() > k) {
24                speedSum -= pq.top();
25                pq.pop();
26            }
27
28            ans = max(ans, speedSum * 1LL * e);
29        }
30
31        return (int)(ans % MOD);
32    }
33};