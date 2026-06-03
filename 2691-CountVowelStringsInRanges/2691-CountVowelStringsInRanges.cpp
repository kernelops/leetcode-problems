// Last updated: 6/3/2026, 11:29:10 PM
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) 
    {
        vector<bool> ans; 
        for (int i=0; i<words.size(); i++){
            if (words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0] == 'u'){
                if (words[i][words[i].size()-1] == 'a' || words[i][words[i].size()-1] == 'e' || words[i][words[i].size()-1] == 'i' || words[i][words[i].size()-1] == 'o' || words[i][words[i].size()-1] == 'u')
                    ans.push_back(true);
                else ans.push_back(false); 
            }
            else ans.push_back(false);  
        }    

        int count=0; 
        vector<int> cumulative;  
        for (bool i: ans){
            if (i) count++; 
            cumulative.push_back(count); 
        }

        vector<int> soln; 
        for (vector<int> i : queries) {
            int l=i[0], r=i[1]; 

            if (l == 0) soln.push_back(cumulative[r]); 
            else soln.push_back(cumulative[r] - cumulative[l-1]); 
        }

        return soln; 
    }
};