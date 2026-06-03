// Last updated: 6/3/2026, 11:29:58 PM
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        priority_queue<int> pq; 
        for (int i: stones) pq.push(i); 

        while (pq.size() > 1){
            int a = pq.top(); pq.pop(); 
            int b = pq.top(); pq.pop(); 

            if (a == b) continue; 
            else{
                if (a>b) pq.push(a-b); 
                else pq.push(b-a); 
            }
        } 

        if (pq.size() == 0) return 0; 
        return pq.top(); 
    }
};