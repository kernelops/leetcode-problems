class Solution {
public:
    int countSeniors(vector<string>& details) 
    {
        vector<int> age;  
        for (string s: details){
            string a="";
            a += s[11]; 
            a += s[12];  
            age.push_back(stoi(a)); 
        }    

        int count=0; 
        for (int a: age)
            if (a>60) count++; 
        
        return count; 
    }
};