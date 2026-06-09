// Last updated: 6/9/2026, 10:43:35 PM
class Solution {
public:
    string reorganizeString(string s) 
    {
        unordered_map<char, int> mpp; 
        for (char c: s) mpp[c]++; 

        priority_queue<pair<int, char>> pq; 

        for (auto i: mpp) pq.push({i.second, i.first}); 

        string ans=""; 
        while (pq.size() >= 2){
            auto char1 = pq.top(); pq.pop(); 
            auto char2 = pq.top(); pq.pop();

            ans += char1.second; 
            ans += char2.second; 
            
            char1.first--; char2.first--; 

            if (char1.first > 0) pq.push(char1); 
            if (char2.first > 0) pq.push(char2); 
        }

        if (!pq.empty()){
            auto chr = pq.top(); 
            if (chr.first > 1) return ""; 
            ans += chr.second;  
        }

        return ans; 
    }
};