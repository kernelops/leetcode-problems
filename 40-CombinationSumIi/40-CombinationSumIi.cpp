// Last updated: 6/3/2026, 11:34:14 PM
class Solution {
public:
    set<vector<int>> s;
    void findCombinations(int index, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        if (index == arr.size())
        {
            if (target == 0 && s.find(ds) == s.end())
            {
                ans.push_back(ds);
                s.insert(ds);
            }
            return;
        }
        if (arr[index] <= target)
        {
            ds.push_back(arr[index]);
            findCombinations(index+1, target-arr[index], arr, ans, ds);
            ds.pop_back();
        }
        int next = index + 1;
        while (next < arr.size() && arr[next] == arr[index]) next++;
        findCombinations(next, target, arr, ans, ds);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        findCombinations(0, target, candidates, ans, ds);
        return ans;
    }
};