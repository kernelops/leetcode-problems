// Last updated: 6/3/2026, 11:31:00 PM
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        vector<int> temp;
        for(int i: score)
            temp.push_back(i);
        vector<string> final (score.size(), "");
        sort(temp.begin(), temp.end(), greater<int>());
        for (int i = 0; i < temp.size(); i++)
        {
            for (int j=0; j<score.size(); j++)
                if (score[j] == temp[i])
                {
                    if (i==0) final[j] = "Gold Medal";
                    else if (i==1) final[j] = "Silver Medal";
                    else if (i==2) final[j] = "Bronze Medal";
                    else final[j] = to_string(i+1);
                    break;
                }
        }
        return final;

    }
};