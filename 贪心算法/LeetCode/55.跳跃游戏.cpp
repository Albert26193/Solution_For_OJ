/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
   public:
    bool canJump(vector<int>& nums) {
        int i = 0;
        int right_most = 0;

        for (i = 0; i < nums.size(); i++) {
            if (i <= right_most) {
                if (nums[i] + i > right_most) {
                    right_most = nums[i] + i;
                }
            }
            else{
                break;
            }
        }

        if(right_most >= nums.size() - 1){
            return true;
        }
        else{
            return false;
        }
    }
};
// @lc code=end
