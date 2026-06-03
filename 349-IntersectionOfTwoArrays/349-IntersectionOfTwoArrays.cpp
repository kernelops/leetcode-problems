// Last updated: 6/3/2026, 11:31:20 PM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        map<int, int> count;
        vector<int> res;

        for (int i = 0; i < nums1.size(); i++)
        {
            int num = nums1[i];
            for (int j = 0; j < nums2.size(); j++)
            {
                if (num == nums2[j])
                    res.push_back(num);
            }
        }

        for (int i = 0; i < res.size(); i++)
            count[res[i]]++;

        res.clear();

        for (auto &i : count)
            res.push_back(i.first);

        return res;
    }
};
