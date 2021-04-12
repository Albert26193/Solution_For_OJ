/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
// TODO: 此题的结构仍然需要优化，尝试将算法空间复杂度降低到O(1)
class Solution {
   public:
    int climbStairs(int n) {
        int temp = 0;
        vector<int> dp(2);
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            temp = dp[i - 1] + dp[i - 2];
            dp.push_back(temp);
        }
        return dp[n];
    }
};

