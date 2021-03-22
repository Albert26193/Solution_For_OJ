/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int ans = 0;
        for (i = 1; i < prices.size(); i++) {
            ans += max(0, prices[i] - prices[i - 1]);
        }
        return ans;
    }
};
// @lc code=end
