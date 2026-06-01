class Solution {
public:
    int maxVowels(string s, int k) 
    {
        int count=0, maxi=0, left=0, right=k; 
        for (int i=0; i<right; i++){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count++; 
        }

        maxi = count;

        while (right < s.size()){
            if (s[right] == 'a' || s[right] == 'e' || s[right] == 'i' || s[right] == 'o' || s[right] == 'u') count++;

            if (s[left] == 'a' || s[left] == 'e' || s[left] == 'i' || s[left] == 'o' || s[left] == 'u') count--;

            maxi = max(maxi, count); 
            right++;
            left++; 
        }    

        return maxi; 
    }
};