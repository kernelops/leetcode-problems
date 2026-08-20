// Last updated: 8/21/2026, 12:14:18 AM
class Solution {
public:
    int maximumGap(string skill, string station) {
        
        vector<int> left(skill.size()), right(skill.size()); 

        // from left side
        int j=0; 
        for (int i = 0; i<skill.size(); i++){
            while (skill[i] != station[j]) j++; 

            left[i] = j; 
            j++; 
        }

        // from right side
        j = station.size()-1; 
        for (int i = skill.size()-1; i>=0; i--){
            while (skill[i] != station[j]) j--; 

            right [i] = j;
            j--; 
        }

        int ans=0; 
        for (int i=1; i<skill.size(); i++)
            ans = max(ans, right[i] - left[i-1]); 

        return ans; 
    }
};