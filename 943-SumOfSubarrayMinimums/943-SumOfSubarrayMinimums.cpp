// Last updated: 6/3/2026, 11:30:14 PM
class Solution {
public:
    vector<int> prevsmall(vector<int>& nums) {
        stack<int> st_idx;
        vector<int> index(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            while (!st_idx.empty() && nums[st_idx.top()] >= nums[i]) {
                st_idx.pop();
            }
            index[i] = st_idx.empty() ? -1 : st_idx.top();
            st_idx.push(i);
        }
        return index;
    }

    vector<int> nextsmall(vector<int>& nums) {
        stack<int> st_idx;
        vector<int> index(nums.size());

        for (int i = nums.size() - 1; i >= 0; i--) {
            while (!st_idx.empty() && nums[st_idx.top()] > nums[i]) {
                st_idx.pop();
            }
            index[i] = st_idx.empty() ? -1 : st_idx.top();
            st_idx.push(i);
        }
        return index;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long sum = 0, mod = 1e9+7;

        vector<int> prev = prevsmall(arr);
        vector<int> next = nextsmall(arr);

        for (int i = 0; i < n; i++) {
            if (next[i] == -1) next[i] = n;
            long long left = i - prev[i];
            long long right = next[i] - i;
            sum = (sum + arr[i] * left % mod * right % mod) % mod;
        }

        return sum;
    }
};