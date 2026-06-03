// Last updated: 6/3/2026, 11:30:48 PM
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char, int> mpp; 
        for (char c: tasks) mpp[c]++; 
        
        priority_queue<int> pq; 
        for (auto i: mpp) pq.push(i.second); 
        
        int count = 0; 
        
        while (!pq.empty()){
            vector<int> temp; 
            int cycle = n + 1;          
            
            while (cycle > 0 && !pq.empty()){
                int top = pq.top(); pq.pop(); 
                if (top - 1 > 0) temp.push_back(top - 1);  
                cycle--;
                count++;               
            }
            
            for (int x : temp) pq.push(x);  
            
            if (!pq.empty()) count += cycle; 
        }
        
        return count; 
    }
};