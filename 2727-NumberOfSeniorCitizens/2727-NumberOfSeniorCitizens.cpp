// Last updated: 6/3/2026, 11:29:09 PM
class Solution {
public:
    int countSeniors(vector<string>& details) 
    {
        int count = 0;

        for (string s : details) {
            int age = stoi(s.substr(11, 2));

            if (age > 60)
                count++;
        }

        return count;
    }
};