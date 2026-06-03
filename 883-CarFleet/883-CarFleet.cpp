// Last updated: 6/3/2026, 11:30:25 PM
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) 
    {
        priority_queue<vector<double>> pq;
        for (int i=0; i<position.size(); i++)
            pq.push({(double)position[i], (double)speed[i], (double)(target-position[i])/speed[i]}); 

        int fleet=0; 
        while (true){
            if (pq.size() == 1) {fleet++; break;}

            auto ahead = pq.top(); pq.pop(); 
            auto behind = pq.top(); pq.pop(); 

            if (behind[2] <= ahead[2]) pq.push(ahead); 
            else{
                fleet++; 
                pq.push(behind); 
            } 
        } 

        return fleet;        
    }
};