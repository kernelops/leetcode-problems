// Last updated: 6/9/2026, 8:13:25 PM
class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) 
    {
        for (int i=0; i<tasks.size(); i++) tasks[i].push_back(i); 

        sort(tasks.begin(), tasks.end()); 

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> ans;   
        long long time=0; int i=0; 

        while (i < tasks.size() || !pq.empty()){
            if (pq.empty() && time <= tasks[i][0])
            time = tasks[i][0]; 

            while (i < tasks.size() && tasks[i][0] <= time){
                int process = tasks[i][1];
                int idx = tasks[i][2];
                pq.push({process, idx});
                i++;
            }

            auto val = pq.top(); 
            pq.pop(); 

            ans.push_back(val.second); 
            time += val.first; 
        }

        return ans; 
    }
};