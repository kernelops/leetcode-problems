// Last updated: 7/9/2026, 11:59:04 PM
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> revIntervals; 
        for (auto i : intervals){
            reverse(i.begin(), i.end()); 
            revIntervals.push_back(i); 
        }

        sort(revIntervals.begin(), revIntervals.end()); 
        int count=1, endTime = revIntervals[0][0]; 

        for (auto i : revIntervals){
            if (endTime <= i[1]){
                endTime = i[0]; 
                count++; 
            }
        }    

        return intervals.size()-count;     
    }
};