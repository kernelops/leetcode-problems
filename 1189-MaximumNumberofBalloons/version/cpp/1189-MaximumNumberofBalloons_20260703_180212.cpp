// Last updated: 7/3/2026, 6:02:12 PM
1class Solution {
2public:
3    int maxNumberOfBalloons(string text) 
4    {
5        unordered_map<char, int> mpp; 
6        for (char c: text) mpp[c]++; 
7
8        int count=0; 
9        while(true){
10            if (mpp['b']){
11                mpp['b']--; 
12                if (mpp['a']){
13                    mpp['a']--; 
14                    if (mpp['l']){
15                        mpp['l']--;
16                        if(mpp['l']){
17                            mpp['l']--; 
18                            if (mpp['o']){
19                                mpp['o']--; 
20                                if (mpp['o']){
21                                    mpp['o']--; 
22                                    if (mpp['n']){
23                                        mpp['n']--; 
24                                        count++; 
25                                    }
26                                    else break; 
27                                }
28                                else break; 
29                            }
30                            else break;
31                        }
32                        else break; 
33                    }
34                    else break; 
35                }
36                else break; 
37            }
38            else break; 
39        }    
40
41        return count; 
42    }
43};