// Last updated: 6/3/2026, 11:30:39 PM
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        stack<int> s;
        for (int i=0; i<asteroids.size(); i++)
        {
            if (asteroids[i]>0) s.push(asteroids[i]);
            else
            {
                while ( !s.empty() && s.top() > 0 && abs(asteroids[i]) > s.top()) s.pop();
                if ( !s.empty() && s.top() > 0 && abs(asteroids[i]) == s.top()) s.pop();
                else if (s.empty() || s.top() < 0) s.push(asteroids[i]);
            }
        }

        // convert stack to vector
        vector<int> result(s.size());
        for (int i = s.size() - 1; i >= 0; --i)
        {
            result[i] = s.top();
            s.pop();
        }

        return result;    
    }
};