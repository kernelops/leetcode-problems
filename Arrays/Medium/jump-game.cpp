class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last = nums.size()-1;
        int cursor = 0;
        int val = nums[0]; int max_val=0, max_pos=0;
        if (val >= nums.size()-1) return true;
        while (cursor <= nums.size()-1){
            max_val=0;
            if (nums.size()>1){
                for (int i=cursor+1; i<=cursor+val && i<nums.size(); i++){
                    if (i+nums[i] > max_val){
                        max_val = i+nums[i];
                        max_pos = i;
                    }
                }
            }
            else return true;
            cursor = max_pos;
            val = nums[cursor];
            if (val == 0) return false;
            if (cursor + val +1 >= nums.size())
                return true;
        }
        return false;
    }
};