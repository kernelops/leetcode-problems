// Last updated: 6/3/2026, 11:31:40 PM
class Solution {
public:
bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    map<char, int> count;

    for (char c : s) count[c]++;
    for (char c : t) count[c]--;

    for (auto &p : count) {
        if (p.second != 0) return false;
    }

    return true;
}
};