// Last updated: 6/24/2026, 6:38:31 PM
1class Solution {
2public:
3    bool lemonadeChange(vector<int>& bills) 
4    {
5        unordered_map<int, int> mpp; 
6
7        for (int i : bills){
8            if (i == 5) mpp[i]++; 
9            else if (i == 10){
10                if (mpp[5] == 0) return false; 
11                mpp[i]++; 
12                mpp[5]--; 
13            }
14            else if (i==20){
15                if(mpp[5] > 0 && mpp[10] > 0){
16                    mpp[i]++; 
17                    mpp[5]--; mpp[10]--; 
18                }
19                else if (mpp[5] >= 3){
20                    mpp[5] -= 3; 
21                    mpp[i]++; 
22                } 
23
24                else return false; 
25            }
26        }    
27
28        return true; 
29    }
30};