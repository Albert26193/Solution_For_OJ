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
        int left = 0;
        int mid = x/2;

        while ((right -left)> 1) {
            if (mid < x / mid)
                left = mid;
            else if (double(x / mid) == double(mid))
                break;
            else
                right = mid;

            mid = (right + left) / 2;
        }

        return mid;
    }
};

// @lc code=end
