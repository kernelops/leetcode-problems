// Last updated: 7/12/2026, 12:34:22 AM
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) 
    {
        vector<vector<int>> ans = img;
        for (int i=0; i<img.size(); i++){
            for (int j=0; j<img[i].size(); j++){
                
                int count=0, sum=0; 
                for (int dx=-1; dx<=1; dx++){
                    for (int dy=-1; dy<=1; dy++){
                        int newx = i + dx; 
                        int newy = j + dy; 

                        if (newx >= 0 && newx < img.size() && newy >= 0 && newy < img[0].size()){
                            count++; 
                            sum += img[newx][newy]; 
                        }
                    }
                }

                int aveg = floor(sum/count); 
                ans[i][j] = aveg; 
            }
        }    

        return ans; 
    }
};