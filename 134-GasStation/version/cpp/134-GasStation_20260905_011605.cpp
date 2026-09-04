// Last updated: 9/5/2026, 1:16:05 AM
1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4        int gasTotal=0, costTotal=0; 
5        for (int i=0; i<gas.size(); i++) {
6            gasTotal += gas[i]; 
7            costTotal += cost[i]; 
8        }
9
10        if (gasTotal < costTotal) return -1; 
11
12        int start=0, fuel=0; 
13        for (int i=0; i<gas.size(); i++) {
14            fuel += gas[i] - cost[i]; 
15            if (fuel < 0) {
16                start = i+1; 
17                fuel = 0; 
18            }
19        }
20
21        return start; 
22    }
23};