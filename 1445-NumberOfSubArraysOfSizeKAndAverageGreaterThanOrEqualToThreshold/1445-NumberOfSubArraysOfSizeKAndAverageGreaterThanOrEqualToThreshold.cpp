// Last updated: 6/3/2026, 11:29:48 PM
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;

        for (int i = 0; i < k; i++)
            sum += arr[i];

        int count = 0;
        int l = 0, r = k - 1;

        while (true) {
            if (sum >= threshold * k)
                count++;

            r++;
            if (r >= arr.size())
                break;

            sum = sum - arr[l] + arr[r];
            l++;
        }

        return count;
    }
};