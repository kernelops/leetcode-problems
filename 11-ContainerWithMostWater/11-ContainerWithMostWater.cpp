// Last updated: 6/3/2026, 11:34:54 PM
class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int left=0, right = height.size()-1;
        int maxvol = INT_MIN; 
        while (left<right){
            int vol = (right-left)*(min(height[left], height[right])); 
            maxvol = max(maxvol, vol); 

            if (height[right] < height[left]) right--; 
            else left++; 
        }    

        return maxvol;
    }
};