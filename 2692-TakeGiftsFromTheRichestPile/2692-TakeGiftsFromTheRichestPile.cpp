// Last updated: 6/8/2026, 10:46:09 PM
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) 
    {
        priority_queue<int> pq; 
        for (int i: gifts) pq.push(i); 

        for (int i=0; i<k; i++){
            int val = pq.top(); 
            pq.pop(); 
            val = int(sqrt(val));
            pq.push(val);  
        }    

        long long ans=0; 
        while (!pq.empty()){
            ans += pq.top(); 
            pq.pop(); 
        } 

        return ans; 
    }
};