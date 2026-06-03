// Last updated: 6/3/2026, 11:32:23 PM
class Solution {
public:
    int check(int n)
    {
        int sum=0;
        while (n!=0)
        {
            int a = n%10;
            sum += a*a;
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) 
    {
        int res = check(n);
        while (res != 1 && res != 4) // every unhappy number eventually reaches 4 and then loops forever.
            res = check(res);
        if (res == 4) return false;
        return true;
    }
};