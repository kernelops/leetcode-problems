// Last updated: 8/23/2026, 11:53:01 PM
1class Solution {
2public:
3    bool sumGame(string num) 
4    {
5        // if count of ? is odd, alice wins
6        int count=0; 
7        for (char c: num) if (c == '?') count++; 
8        if (count % 2 != 0) return true; 
9
10        int leftSum=0, rightSum=0, leftQM=0, rightQM=0; 
11        for (int i=0; i<num.size()/2; i++){
12            if (num[i] != '?') leftSum += num[i] - '0';
13            else leftQM++;  
14            if (num[num.size()-1-i] != '?') rightSum += num[num.size()-1-i] - '0'; 
15            else rightQM++;  
16        }
17
18        if (leftSum == rightSum && leftQM == rightQM) return false; 
19
20        // A case when one side has an extra pair of Question mark than the other side
21        int sumDiff = leftSum - rightSum;
22        int QMDiff = leftQM - rightQM; 
23
24        return sumDiff != -9 * QMDiff/2;  
25    }
26};