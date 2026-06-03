// Last updated: 6/3/2026, 11:34:52 PM
class Solution {
public:
    int romanToInt(string s) 
    {
        int sum=0;
        for (char i=0; i<s.length(); i++)
        {
            char current = s[i]; int current_val=0;
            switch(current)
            {
                case 'I': current_val = 1; break;
                case 'V': current_val = 5; break;
                case 'X': current_val = 10; break; 
                case 'L': current_val = 50; break;
                case 'C': current_val = 100; break;
                case 'D': current_val = 500; break;
                case 'M': current_val = 1000; break;
            }

            char next = s[i+1]; int next_val=0;
            if (i < s.length()-1)
            {
                switch(next)
                {
                    case 'I': next_val = 1; break;
                    case 'V': next_val = 5; break;
                    case 'X': next_val = 10; break; 
                    case 'L': next_val = 50; break;
                    case 'C': next_val = 100; break;
                    case 'D': next_val = 500; break;
                    case 'M': next_val = 1000; break;
                }

                if (current_val < next_val)
                    sum -= current_val;
                else sum += current_val;
            }
            else sum += current_val;
        }
        return sum;
    }
};