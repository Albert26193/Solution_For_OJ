/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
   public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int child = 0;
        int candy = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while (child < g.size() && candy < s.size()) {
            if (g[child] <= s[candy]) {
                child++;
            }
            candy++;
        }

        return child;
    };
};
// @lc code=end
