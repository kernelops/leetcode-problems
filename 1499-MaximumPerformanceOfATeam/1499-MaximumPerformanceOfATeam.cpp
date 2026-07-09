// Last updated: 7/9/2026, 11:57:01 PM
class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        const int MOD = 1e9 + 7;
        vector<pair<int,int>> workers;
        workers.reserve(n);
        for (int i = 0; i < n; ++i) {
            workers.push_back({efficiency[i], speed[i]});
        }
        sort(workers.rbegin(), workers.rend()); // by efficiency desc

        long long ans = 0;
        long long speedSum = 0;
        priority_queue<int, vector<int>, greater<int>> pq;

        for (auto &w : workers) {
            int e = w.first;
            int s = w.second;

            pq.push(s);
            speedSum += s;

            if ((int)pq.size() > k) {
                speedSum -= pq.top();
                pq.pop();
            }

            ans = max(ans, speedSum * 1LL * e);
        }

        return (int)(ans % MOD);
    }
};