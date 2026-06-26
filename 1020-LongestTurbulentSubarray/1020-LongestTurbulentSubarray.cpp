// Last updated: 6/26/2026, 1:42:48 PM
class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr)
    {
        if (arr.size() == 1) return 1;

        vector<char> res;
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i + 1]) res.push_back('g');
            else if (arr[i] < arr[i + 1]) res.push_back('l');
            else res.push_back('e');
        }

        int current = (res[0] == 'e') ? 0 : 1;
        int maxi = current;

        for (int i = 1; i < res.size(); i++) {
            if ((res[i - 1] == 'g' && res[i] == 'l') ||
                (res[i - 1] == 'l' && res[i] == 'g')) 
                current++;
                
            else if (res[i] == 'e') current = 0;
            else  current = 1;

            maxi = max(maxi, current);
        }

        return maxi + 1;
    }
};