// Last updated: 6/3/2026, 11:34:16 PM
class Solution {
public:
    void findCombinations(int index, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        if (index == arr.size())
        {
            if (target == 0)
                ans.push_back(ds);
            return;
        }
        if (arr[index] <= target)
        {
            ds.push_back(arr[index]);
            findCombinations(index, target-arr[index], arr, ans, ds);
            ds.pop_back();
        }
        int next = index + 1;
        while (next < arr.size() && arr[next] == arr[index]) next++;
        findCombinations(next, target, arr, ans, ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinations(0, target, candidates, ans, ds);
        return ans;
    }
};