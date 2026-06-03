// Last updated: 6/3/2026, 11:33:43 PM
class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        map <int, int> count;
        for (int i=0; i<nums.size(); i++)   
            count[nums[i]]++;
        nums.clear();
        for (auto &[key, value] : count){
            for (int i=0; i<value; i++)
                nums.push_back(key);
        }   
    }
};