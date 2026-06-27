// Last updated: 6/27/2026, 8:03:43 PM
1class Solution {
2public:
3    bool carPooling(vector<vector<int>>& trips, int capacity) 
4    {
5        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> temp;
6        for (auto i: trips)
7            temp.push({i[1], i[2], i[0]}); 
8
9        vector<int> time(1001, 0); 
10        while (!temp.empty()){
11            auto i = temp.top(); temp.pop(); 
12            time[i[0]] += i[2]; 
13            time[i[1]] += -i[2]; 
14        }
15
16        int curPass=0; 
17        for (int i: time){
18            curPass += i; 
19            if (curPass > capacity) return false; 
20        }
21
22        return true; 
23    }
24};