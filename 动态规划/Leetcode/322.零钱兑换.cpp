/*
 * @lc app=leetcode.cn id=322 lang=cpp
 *
 * [322] 零钱兑换
 */

// @lc code=start
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(coins.empty()){
            return -1;
        }

        int Max = amount + 1;
        vector<int> dp(amount + 1,Max);
        dp[0] = 0;
        for(int i = 1; i <= amount; i++){
            for(int k = 0; k < (int) coins.size(); k++){
                if(coins[k] <= i){
                    dp[i] = min(dp[i],dp[i - coins[k]] + 1);
                }
            }
        }
        return dp[amount] > amount ? -1 : dp[amount];
    }
};
// @lc code=end

