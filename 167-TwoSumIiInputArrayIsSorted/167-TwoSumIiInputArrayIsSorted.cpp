// Last updated: 6/3/2026, 11:32:37 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        if (numbers.size() == 0) return {}; 
        if (numbers.size() == 1){
            if (target == numbers[0]) return {1}; 
            else return {}; 
        }

        int l=0, r=numbers.size()-1; 
        while(l<=r){
            if (numbers[l]+numbers[r] == target) return {l+1, r+1}; 
            if (numbers[l]+numbers[r] < target) l++;
            if (numbers[l]+numbers[r] > target) r--;
        } 

        return {}; 
    }
};