class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        int count_pivot=0; 
        for (int i: nums) if (i==pivot) count_pivot++; 
        
        vector<int> ans; 
        for (int i: nums){
            if (i<pivot)
                ans.push_back(i); 
        }    

        for (int i=0; i<count_pivot; i++) ans.push_back(pivot); 

        for (int i: nums){
            if (i>pivot)
                ans.push_back(i); 
        } 

        return ans; 

    }
};