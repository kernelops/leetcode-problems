class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) 
    {
        vector<int> cost; 
        for (int i=0; i<s.size(); i++){
            cost.push_back(abs(s[i] - t[i])); 
        }    

        int maxi=INT_MIN; 
        int currentCost=0, left=0; 
        for (int right=0; right<cost.size(); right++){
            currentCost += cost[right]; 

            while (currentCost > maxCost){
                currentCost -= cost[left]; 
                left++; 
            }

            maxi = max(maxi, right-left+1); 
        }

        return (maxi == INT_MIN) ? -1 : maxi; 
    }
};