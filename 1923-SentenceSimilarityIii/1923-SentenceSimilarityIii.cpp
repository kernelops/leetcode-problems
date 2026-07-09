// Last updated: 7/9/2026, 11:56:16 PM
class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) 
    {
        vector<string> s1, s2;
        string word;

        word.clear();
        for (char c: sentence1) {
            if (c != ' ') word += c;
            else {
                if (!word.empty()) s1.push_back(word);
                word.clear();
            }
        }
        if (!word.empty()) s1.push_back(word);

        word.clear();
        for (char c: sentence2) {
            if (c != ' ') word += c;
            else {
                if (!word.empty()) s2.push_back(word);
                word.clear();
            }
        }
        if (!word.empty()) s2.push_back(word);

        int i = 0;
        int n1 = s1.size(), n2 = s2.size();

        // common prefix
        while (i < n1 && i < n2 && s1[i] == s2[i]) {
            i++;
        }

        int j1 = n1 - 1;
        int j2 = n2 - 1;

        // common suffix
        while (j1 >= i && j2 >= i && s1[j1] == s2[j2]) {
            j1--;
            j2--;
        }

        bool s1HasNoMiddle = (j1 < i);
        bool s2HasNoMiddle = (j2 < i);

        return s1HasNoMiddle || s2HasNoMiddle;
    }
};