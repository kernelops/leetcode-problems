// Last updated: 6/3/2026, 11:34:11 PM
int maxSubArray(int* nums, int numsSize) 
{
    int i=0, max=INT_MIN, sum=0;
    for(int i=0; i<numsSize; i++)
    {
        
        sum += nums[i];
        if (sum > max)
            max = sum;
        if(sum<0)
            sum=0;
    }
    return max;
}