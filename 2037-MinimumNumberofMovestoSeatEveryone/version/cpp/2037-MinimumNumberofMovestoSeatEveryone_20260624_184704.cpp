// Last updated: 6/24/2026, 6:47:04 PM
1class Solution {
2public:
3    int minMovesToSeat(vector<int>& seats, vector<int>& students) 
4    {
5        sort(seats.begin(), seats.end()); 
6        sort(students.begin(), students.end()); 
7
8        int moves=0; 
9        for (int i=0; i<seats.size(); i++){
10            moves += abs(seats[i]-students[i]);
11        }    
12
13        return moves; 
14    }
15};