// Last updated: 6/3/2026, 11:31:09 PM
class Solution {
public:
    string frequencySort(string s) 
    {
        map<char, int> count; string result=""; char max_char;
        for (int i=0; i<s.size(); i++){
            count[s[i]]++;
        }
        int max_val = INT_MIN;
        while (count.size() != 0){
            int max_val = INT_MIN;
            for (const auto& [key, value] : count){
                if (value>max_val) {max_val = value; max_char = key;}
            }
            result.append(max_val, max_char);
            count.erase(max_char);
        }
        return result;
    }
};