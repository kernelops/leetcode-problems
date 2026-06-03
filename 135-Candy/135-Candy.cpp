// Last updated: 6/3/2026, 11:33:03 PM
class Solution {
public:
    int candy(vector<int>& ratings) 
    {
        vector<int> candiesl(ratings.size(), 1);
        vector<int> candiesr(ratings.size(), 1);
        vector<int> candies(ratings.size(), 1);
        // left to right
        for (int i=1; i<ratings.size(); i++)
            if (ratings[i] > ratings[i-1])
                candiesl[i] = candiesl[i-1] + 1;
        
        // right to left
        for (int i=ratings.size()-2; i>=0; i--)
            if (ratings[i] > ratings[i+1])
                candiesr[i] = candiesr[i+1]+1;
        
        // max of candies-l and candies-r
        for (int i=0; i<candiesl.size(); i++)
            candies[i] = max(candiesl[i], candiesr[i]);
        
        int count=0;
        for (int i=0; i<candies.size(); i++)
            count = count + candies[i];

        return count;
        
    }
};