class Solution {
public:
    long long dividePlayers(vector<int>& skill) 
    {
        if (skill.size() == 0 || skill.size()%2 != 0) return -1; 

        sort(skill.begin(), skill.end()); 

        int l=0, r=skill.size()-1; 
        int teamCount = skill.size()/2; 

        int total=0; 
        for (int i: skill) total+=i; 

        int value = total/teamCount; 

        long long sum=0; 
        while (l<r){
            if (skill[l] + skill[r] != value) return -1; 
            sum += skill[l]*skill[r]*1LL; 

            l++; r--; 
        }

        return sum; 
    }
};