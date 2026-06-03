// Last updated: 6/3/2026, 11:30:26 PM
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) 
    {
        int size = hand.size(); 
        if (size % groupSize != 0) return false; 

        map<int, int> mpp; 
        for (int i: hand) mpp[i]++; 

        while (!mpp.empty()){
            stack<int> st;
            int count = 0;
            vector<int> used;              // keys we will decrement later

            for (auto p : mpp) {
                int key = p.first;

                if (!st.empty()){
                    int top = st.top(); 
                    if (top != key - 1) return false;
                }

                st.push(key); 
                used.push_back(key);      
                count++; 

                if (count == groupSize) break; 
            }

            if (count != groupSize) return false;

            // now safely decrement and erase outside the iteration
            for (int key : used) {
                mpp[key]--;
                if (mpp[key] == 0) mpp.erase(key);
            }
        }  

        return true;   
    }
};