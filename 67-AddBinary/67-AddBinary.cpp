// Last updated: 6/3/2026, 11:33:52 PM
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) 
    {
        int len_a = a.length() - 1;
        int len_b = b.length() - 1;
        string sum;
        int carry = 0;
        while (len_a >= 0 || len_b >= 0)
        {
            int num_a = (len_a >= 0 ? a[len_a] - '0' : 0);
            int num_b = (len_b >= 0 ? b[len_b] - '0' : 0);
            if (num_a == 0 && num_b == 0 && carry == 0)
            {
                sum.push_back('0');
                carry = 0;
            }
            else if (num_a == 0 && num_b == 0 && carry == 1)
            {
                sum.push_back('1');
                carry = 0;
            }
            else if (((num_a == 1 && num_b == 0) || (num_a == 0 && num_b == 1)) && carry == 0)
            {
                sum.push_back('1');
                carry = 0;
            }
            else if (((num_a == 1 && num_b == 0) || (num_a == 0 && num_b == 1)) && carry == 1)
            {
                sum.push_back('0');
                carry = 1;
            }
            else if (num_a == 1 && num_b == 1 && carry == 0)
            {
                sum.push_back('0');
                carry = 1;
            }
            else if (num_a == 1 && num_b == 1 && carry == 1)
            {
                sum.push_back('1');
                carry = 1;
            }
            if (len_a >= 0) len_a--;
            if (len_b >= 0) len_b--;
        }
        if (carry == 1)
            sum.push_back('1');
        reverse(sum.begin(), sum.end());
        return sum;
    }
};
