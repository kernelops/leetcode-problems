// Last updated: 6/3/2026, 11:29:28 PM
class Solution {
public:
    long long power(long long base, long long exp, long long mod)
    {
        long long result = 1;
        base %= mod;
        while (exp > 0)
        {
            if (exp % 2 == 1)
                result = result * base % mod;
            base = base * base % mod;  // stays within long long range
            exp /= 2;
        }
        return result;
    }

    int countGoodNumbers(long long n) 
    {
        const long long MOD = 1e9 + 7;
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        long long ans = power(5, even, MOD) * power(4, odd, MOD) % MOD;
        return (int)ans;
    }
};
