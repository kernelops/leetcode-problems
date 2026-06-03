// Last updated: 6/3/2026, 11:33:35 PM
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        vector<int> merged;
        int i=0, j=0;
        while (i<m && j<n)
        {
            if (nums1[i]<=nums2[j])
                merged.push_back(nums1[i++]);
            else
                merged.push_back(nums2[j++]);
        }
        while (i<m)
            merged.push_back(nums1[i++]);
        while (j<n)
            merged.push_back(nums2[j++]);

        for (int i=0; i<m+n; i++)
            nums1[i] = merged[i];
    }
};