// Last updated: 6/3/2026, 11:33:50 PM
class Solution {
public:
    int mySqrt(long x) 
    {   
        long i; long left = 1, right = x;
        if (x==1)
            return 1;
        // for (i=1; i<x; i++)
        // {
        //     long product = i*i;
        //     if (product == x)
        //         return i;
        //     if (product > x)
        //         break;         
        // }

        while (left <= right)
        {
            long mid = left + (right - left)/2;
            long product = mid * mid;
            if (product == x)
                return mid;
            else if (product < x)
                left = mid + 1;
            else right = mid - 1;
        }
        return right;
    }
};