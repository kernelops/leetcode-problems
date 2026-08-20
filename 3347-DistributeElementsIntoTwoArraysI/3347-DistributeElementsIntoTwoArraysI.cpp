// Last updated: 8/21/2026, 12:14:57 AM
class Solution {
public:
    vector<int> resultArray(vector<int>& nums) 
    {
        vector<int> arr1, arr2; 
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]); 

        for (int i=2; i<nums.size(); i++){
            if (arr1.back() > arr2.back()) arr1.push_back(nums[i]); 
            else arr2.push_back(nums[i]); 
        }    

        vector<int> results = arr1; 
        for (int i: arr2) results.push_back(i); 

        return results; 
    }
};