// Last updated: 6/3/2026, 11:34:56 PM
class Solution {
public:
    int reverse(int x) 
    {
        long long sum=0;
        if (x>=0)
        {
            string s = to_string(x);
            int n = s.size()-1;
            while (x>0)
            {
                int d = x%10;
                sum = sum + pow(10, n) * d;
                n--;
                x = x/10;
            }
        }
        else
        {
            long long temp = x;
            temp = abs(temp);
            string s = to_string(temp);
            int n = s.size()-1;
            while (temp>0)
            {
                int d = temp%10;
                sum = sum + pow(10, n) * d;
                n--;
                temp = temp/10;
            }
            sum = sum*-1;           
        }
        if (sum > INT_MAX || sum < INT_MIN)
            return 0;

        return sum;    
    }
    bool isPalindrome(int x) {
        int rev = reverse(x);
        if (x<0) return false;
        return (rev == x) ? true: false;
        
    }
};