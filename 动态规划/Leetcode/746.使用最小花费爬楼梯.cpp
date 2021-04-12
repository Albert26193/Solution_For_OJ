/*
 * @lc app=leetcode.cn id=746 lang=cpp
 *
 * [746] 使用最小花费爬楼梯
 */

// @lc code=start
// dp: dp[i] = min(dp[i-1] + cost[i - 1],dp[i - 2] + cost[i -2])
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.empty()){
            return 0;
        }
        int size_cost = cost.size();
        vector<int> dp(size_cost + 1);
        dp[0] = 0;
        dp[1] = 0;
        for(int i = 2; i <= size_cost; i++){
            dp[i] = min(dp[i-1] + cost[i -1],dp[i -2] + cost[i - 2]);
        }
        return dp[size_cost];
    }
};
// @lc code=end

