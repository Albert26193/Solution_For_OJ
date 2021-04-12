/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution {
   public:
    int rob(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int size = nums.size();
        if(size == 1){
            return nums[0];
        }

        vector<int> dp(2);
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        for (int i = 2; i < nums.size(); i++) {
            dp.push_back(max(dp[i - 1], dp[i - 2] + nums[i]));
        }
        return dp[(int)nums.size() - 1];
    }
};
// @lc code=end
