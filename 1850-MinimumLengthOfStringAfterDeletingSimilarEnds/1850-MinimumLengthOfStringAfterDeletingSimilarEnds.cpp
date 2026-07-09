// Last updated: 7/9/2026, 11:56:28 PM
class Solution {
public:
    int minimumLength(string s) 
    {
        int l = 0, r = (int)s.size() - 1;
        int size = (int)s.size();

        while (l < r && s[l] == s[r]) {
            char c = s[l];

            while (l <= r && s[l] == c) {
                l++;
                size--;
            }

            while (l <= r && s[r] == c) {
                r--;
                size--;
            }
        }

        return size;
    }
};