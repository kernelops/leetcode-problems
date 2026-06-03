// Last updated: 6/3/2026, 11:29:02 PM
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count = 0;
        vector<int> basketsCopy = baskets; // Create a copy to work with
        
        for (int fruit : fruits) {
            bool placed = false;
            
            // Find the leftmost basket with sufficient capacity
            for (int j = 0; j < basketsCopy.size(); j++) {
                if (basketsCopy[j] >= fruit) {
                    basketsCopy.erase(basketsCopy.begin() + j); // Remove this basket
                    placed = true;
                    break; // Exit after placing the fruit
                }
            }
            
            if (!placed) {
                count++; // Increment count if fruit couldn't be placed
            }
        }
        
        return count;
    }
};