/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
   public:
    int mySqrt(int x) {
        if (x == 0)
            return 0;

        if (x == 1)
            return 1;

        int right = x;
        int distance = 0;
        int left = 0;
        int mid = x/2;

        distance = right - left;
        while (distance > 1) {
            if (mid < x / mid)
                left = mid;
            else if (double(x / mid) == double(mid))
                break;
            else
                right = mid;

            mid = (right + left) / 2;
            distance = right - left;
        }

        return mid;
    }
};

// @lc code=end
