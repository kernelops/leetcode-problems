// Last updated: 6/3/2026, 11:32:06 PM
class Solution {
public:
    void findCombinations(int i, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }

        if (target < 0 || i == arr.size())
            return;

        if (arr[i] <= target)
        {
            ds.push_back(arr[i]);
            findCombinations(i+1, target - arr[i], arr, ans, ds);
            ds.pop_back();
        }
        findCombinations(i+1, target, arr, ans, ds);
    }
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinations(0, n, arr, ans, ds);
        vector<vector<int>> fin;
        for (vector<int> i: ans)
            if (i.size() == k) fin.push_back(i);
        return fin;
    }
};