// Last updated: 6/3/2026, 11:31:38 PM
class Solution {
public:

    int sum (int num)
    {
        int sum = 0;
        while (num>0)
        {
            int digit = num % 10;
            sum += digit;
            num = num / 10;
        }
        return sum;
    }
    
    int addDigits(int num) 
    {
        while (num > 9)
            num = sum (num);
        return num;
    }
};