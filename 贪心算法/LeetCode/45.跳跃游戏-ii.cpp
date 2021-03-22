/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
class Solution {
   public:
    int jump(vector<int>& nums) {
        int step = 0;
        int i = 0;
        int target = 0;
        int rightmost = 0;

        for (i = 0; i < nums.size() - 1; i++) {
            rightmost = max(rightmost,nums[i] + i);
            if(i == target){
                target = rightmost;
                step++;
            }
        }
        return step;
    }
};
// @lc code=end
