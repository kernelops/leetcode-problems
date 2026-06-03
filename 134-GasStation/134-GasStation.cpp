// Last updated: 6/3/2026, 11:33:05 PM
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int totalGas=0, totalCost=0; 
        for (int i=0; i<gas.size(); i++){
            totalGas += gas[i]; 
            totalCost += cost[i]; 
        }    

        if (totalCost > totalGas) return -1; 

        int tank = 0, start=0; 
        for (int i=0; i<gas.size(); i++){
            int diff = gas[i] - cost[i]; 
            tank += diff;  
            if (tank < 0){
                tank = 0; 
                start = i+1; 
            }
        }

        return start; 
    }
};