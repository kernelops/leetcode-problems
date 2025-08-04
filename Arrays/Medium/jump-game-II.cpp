class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int pos = 0, count = 0, jump_val = nums[0];
        int max_val = 0, max_pos = 0;

        if (nums.size() == 1) return 0;
        if (jump_val >= nums.size()-1) return 1;
        while (pos < nums.size() - 1)
        {
            max_val = 0;
            for (int i = pos + 1; i <= pos + jump_val && i < nums.size(); i++)
            {
                if (i+nums[i] > max_val)   // choose farthest reach
                {
                    max_val = i + nums[i]; //range
                    max_pos = i;
                }
            }

            pos = max_pos;                   // move to that position
            jump_val = nums[pos];             // next jump length
            count++;

            if (pos + jump_val >= nums.size() - 1) {
                count++;
                break;
            }
        }
        return count;
    }
};
