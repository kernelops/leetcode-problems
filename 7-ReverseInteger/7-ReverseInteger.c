// Last updated: 6/3/2026, 11:35:10 PM


int reverse(int x)
{
    long rev = 0;
    while (x!=0)
    {
        int digit = x%10;
        rev = rev*10 + digit;
        x /= 10;
    }

    if (rev > pow(2, 31) - 1 || rev < -pow(2, 31))
        return 0;
    else
        return rev;
}