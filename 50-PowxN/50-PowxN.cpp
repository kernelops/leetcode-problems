// Last updated: 6/3/2026, 11:34:07 PM
class Solution {
public:
    double myPow(double x, int n) 
    {
        long binForm = n;
        double ans=1;
        if (n<0)
        {
            x = 1/x;
            binForm = -binForm;
        }

        while (binForm>0)
        {
            if (binForm%2 == 1)
                ans *= x;
            x *= x;
            binForm /= 2;
        }
        return ans;
    }
};