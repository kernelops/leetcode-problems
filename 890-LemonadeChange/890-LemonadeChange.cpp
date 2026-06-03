// Last updated: 6/3/2026, 11:30:23 PM
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int count5=0, count10=0, count20=0;
        for (int i: bills)
        {
            if (i == 5) count5++;
            if (i == 10)
            {
                if (count5) count5--; 
                else return false;
                count10++;
            }
            if (i == 20)
            {
                if (count5 && count10)
                {
                    count5--; count10--;
                }
                else if (count5 >=3) count5 = count5-3;
                else return false;
                count20++;
            }
        }    
        return true;
    }
};