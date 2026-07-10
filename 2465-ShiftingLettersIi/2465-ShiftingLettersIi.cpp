// Last updated: 7/11/2026, 12:18:22 AM
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) 
    {
        vector<int> diff(s.size() + 1, 0);

        for (auto i : shifts) {
            if (i[2]) {
                diff[i[0]]++;
                diff[i[1] + 1]--;
            }
            else {
                diff[i[0]]--;
                diff[i[1] + 1]++;
            }
        }

        for (int i = 1; i < s.size(); i++) {
            diff[i] += diff[i - 1];
        }

        for (int i = 0; i < s.size(); i++) {
            int shift = diff[i] % 26;

            if (shift < 0)
                shift += 26;

            int ch = s[i] - 'a';
            ch = (ch + shift) % 26;

            s[i] = 'a' + ch;
        }

        return s;
    }
};