/*
 * @lc app=leetcode.cn id=435 lang=cpp
 *
 * [435] 无重叠区间
 */

// @lc code=start
class Solution {
   public:
    static bool cmp(const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int i = 0;
        int count = 0;
        int limit = -65535;

        if (intervals.size() == 0) {
            return 0;
        }

        sort(intervals.begin(), intervals.end(), cmp);
        for (i = 0; i < intervals.size(); i++) {
            if (intervals[i][0] >= limit) {
                limit = intervals[i][1];
            } else {
                count++;
            }
        }
        return count;
    }
};
// @lc code=end
