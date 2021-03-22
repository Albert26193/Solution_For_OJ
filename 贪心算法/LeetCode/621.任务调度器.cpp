/*
 * @lc app=leetcode.cn id=621 lang=cpp
 *
 * [621] 任务调度器
 */

// @lc code=start
class Solution {
   public:
    int leastInterval(vector<char> &tasks, int n) {
        int count_max = 1;
        int len = 0;
        vector<int> record(26);
        int i = 0;

        for (char c : tasks) {
            record[c - 'A']++;
        }

        sort(record.begin(), record.end(), [](int &x, int &y) { return x > y; });

        while (count_max < record.size() && record[count_max] == record[0]) {
            count_max++;
        }

        len = tasks.size();
        return max(len, count_max + (n + 1) * (record[0] - 1));
    }
};
// @lc code=end
