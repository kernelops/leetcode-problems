// Last updated: 6/30/2026, 6:21:07 PM
1class Solution {
2public:
3    bool areSentencesSimilar(string sentence1, string sentence2) 
4    {
5        vector<string> s1, s2;
6        string word;
7
8        word.clear();
9        for (char c: sentence1) {
10            if (c != ' ') word += c;
11            else {
12                if (!word.empty()) s1.push_back(word);
13                word.clear();
14            }
15        }
16        if (!word.empty()) s1.push_back(word);
17
18        word.clear();
19        for (char c: sentence2) {
20            if (c != ' ') word += c;
21            else {
22                if (!word.empty()) s2.push_back(word);
23                word.clear();
24            }
25        }
26        if (!word.empty()) s2.push_back(word);
27
28        int i = 0;
29        int n1 = s1.size(), n2 = s2.size();
30
31        // common prefix
32        while (i < n1 && i < n2 && s1[i] == s2[i]) {
33            i++;
34        }
35
36        int j1 = n1 - 1;
37        int j2 = n2 - 1;
38
39        // common suffix
40        while (j1 >= i && j2 >= i && s1[j1] == s2[j2]) {
41            j1--;
42            j2--;
43        }
44
45        bool s1HasNoMiddle = (j1 < i);
46        bool s2HasNoMiddle = (j2 < i);
47
48        return s1HasNoMiddle || s2HasNoMiddle;
49    }
50};