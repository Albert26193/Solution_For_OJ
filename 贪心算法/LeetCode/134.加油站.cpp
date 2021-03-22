/*
 * @lc app=leetcode.cn id=134 lang=cpp
 *
 * [134] 加油站
 */

// @lc code=start
class Solution {
   public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int index = 0;
        int i = 0;
        int min_sum = INT_MAX;
        int min_pos = 0;

        for (i = 0; i < gas.size(); i++) {
            index += gas[i] - cost[i];
            if (index < min_sum) {
                min_sum = index;
                min_pos = i;
            }
        }

        return index >= 0 ? (min_pos + 1) % gas.size() : -1;
    }
};
// @lc code=end
