/*
 * @lc app=leetcode.cn id=452 lang=cpp
 *
 * [452] 用最少数量的箭引爆气球
 */

// @lc code=start
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    static bool cmp(const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int nums = 0;
        int i = 0;
        int k = 0;
        int rightmost = 0;

        if (points.size() == 0) {
            return 0;
        }

        sort(points.begin(), points.end(), cmp);

        for (i = 0; i < points.size(); i++) {
            nums++;
            rightmost = points[i][1];
            for (k = i; (k < points.size()) && (points[k][0] <= rightmost); k++) {
                ;
            }
            i = --k;
        }
        return nums;
    }
};

// @lc code=end
