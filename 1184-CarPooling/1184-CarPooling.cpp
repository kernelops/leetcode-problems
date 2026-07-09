// Last updated: 7/9/2026, 11:57:28 PM
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> temp;
        for (auto i: trips)
            temp.push({i[1], i[2], i[0]}); 

        vector<int> time(1001, 0); 
        while (!temp.empty()){
            auto i = temp.top(); temp.pop(); 
            time[i[0]] += i[2]; 
            time[i[1]] += -i[2]; 
        }

        int curPass=0; 
        for (int i: time){
            curPass += i; 
            if (curPass > capacity) return false; 
        }

        return true; 
    }
};