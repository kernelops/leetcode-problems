// Last updated: 6/3/2026, 11:30:18 PM
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) 
    {
        sort(people.begin(), people.end()); 
        
        int left=0, right = people.size()-1, count=0; 
        while (left <= right){
            if (people[left] + people[right] <= limit){
                left++; right--; 
            }
            else right--; 

            count++; 
        }


        return count; 
    }
};