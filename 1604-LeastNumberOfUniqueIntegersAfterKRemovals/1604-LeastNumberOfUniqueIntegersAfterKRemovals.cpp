// Last updated: 6/9/2026, 12:28:44 AM
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) 
    {
        unordered_map<int, int> mpp; 
        for (int i: arr) mpp[i]++;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 

        for (auto i: mpp){
            pq.push({i.second, i.first}); 
        }    

        for (int i=0; i<k; i++){
            auto val = pq.top(); 
            pq.pop(); 
            val.first--; 
            if (val.first > 0) pq.push(val); 
        }

        return pq.size(); 
    }
};