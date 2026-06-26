// Last updated: 6/26/2026, 1:41:34 PM
1class Solution {
2public:
3    int maxTurbulenceSize(vector<int>& arr)
4    {
5        if (arr.size() == 1) return 1;
6
7        vector<char> res;
8        for (int i = 0; i < arr.size() - 1; i++) {
9            if (arr[i] > arr[i + 1]) res.push_back('g');
10            else if (arr[i] < arr[i + 1]) res.push_back('l');
11            else res.push_back('e');
12        }
13
14        int current = (res[0] == 'e') ? 0 : 1;
15        int maxi = current;
16
17        for (int i = 1; i < res.size(); i++) {
18            if ((res[i - 1] == 'g' && res[i] == 'l') ||
19                (res[i - 1] == 'l' && res[i] == 'g')) 
20                current++;
21                
22            else if (res[i] == 'e') current = 0;
23            else  current = 1;
24
25            maxi = max(maxi, current);
26        }
27
28        return maxi + 1;
29    }
30};