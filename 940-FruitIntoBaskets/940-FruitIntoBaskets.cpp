// Last updated: 6/3/2026, 11:30:17 PM
class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        int left=0, right=0, count=0;
        map<int, int> mpp;  
        while (right < fruits.size()){
            mpp[fruits[right]]++; 
            while (mpp.size() > 2){
                mpp[fruits[left]]--;  
                if (mpp[fruits[left]] == 0) mpp.erase(fruits[left]);
                left++; 
            }

            count = max(count, right-left+1); 
            right++;    
        }

        return count; 
    }
};