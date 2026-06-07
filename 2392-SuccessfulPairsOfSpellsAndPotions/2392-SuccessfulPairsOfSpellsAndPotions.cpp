// Last updated: 6/7/2026, 1:56:51 PM
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) 
    {
        sort(potions.begin(), potions.end()); 
        vector<int> ans;    

        for (int spell: spells){
            int left=0, right=potions.size()-1; 
            int firstSuccess=potions.size(); 
            while (left <= right){
                int mid = left + (right-left)/2; 
                long long product = 1LL*potions[mid]*spell; 

                if (product < success) left = mid+1; 
                else{
                    firstSuccess = mid; 
                    right = mid-1; 
                }
            }

            ans.push_back(potions.size() - firstSuccess);   
        }

        return ans; 
    }
};