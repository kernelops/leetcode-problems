// Last updated: 6/23/2026, 10:32:01 PM
void _sol1(int n, vector<int>& perm, map<int, int>& m, vector<vector<int>>& result) {
    if (n == perm.size()) {
        result.push_back(perm);
        return;
    }

    for (auto kv : m) {
        if (kv.second == 0) continue;
        m[kv.first]--;
        perm.push_back(kv.first);

        _sol1(n, perm, m, result);

        perm.pop_back();
        m[kv.first]++;
    }
}

// O(n x n!) / O(n)
vector<vector<int>> sol1(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> perm;
    
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++) {
        if (m.count(nums[i]) == 0) m[nums[i]] = 0;
        m[nums[i]]++;
    }
    
    _sol1(nums.size(), perm, m, result);
    return result;
}
};