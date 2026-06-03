// Last updated: 6/3/2026, 11:34:29 PM
class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int needle_length = needle.length();
        for (int i=0; i<haystack.length(); i++)
        {
            int j=0;
            if (haystack[i] == needle[j])
            {
                for (int a=i; a<haystack.length(); a++)
                {
                    if (haystack[a] == needle[j]) j++;
                    else break;
                    if (needle_length == j)
                        return i;
                }
            }
        }
        return -1;
    }
};