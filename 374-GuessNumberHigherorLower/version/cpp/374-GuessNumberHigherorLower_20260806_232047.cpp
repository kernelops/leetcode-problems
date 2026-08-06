// Last updated: 8/6/2026, 11:20:47 PM
1/** 
2 * Forward declaration of guess API.
3 * @param  num   your guess
4 * @return 	     -1 if num is higher than the picked number
5 *			      1 if num is lower than the picked number
6 *               otherwise return 0
7 * int guess(int num);
8 */
9
10class Solution {
11public:
12    int guessNumber(int n) 
13    {
14        int l=1, r=n; 
15        while (l <= r){
16            int mid = l + (r-l)/2; 
17            int g = guess(mid); 
18            
19            if (g == -1) r = mid-1; 
20            else if(g == 1) l = mid+1;
21            else return mid; 
22        }    
23
24        return -1; 
25    }
26};