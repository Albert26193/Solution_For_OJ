/*
 * @lc app=leetcode.cn id=1052 lang=cpp
 *
 * [1052] 爱生气的书店老板
 */

// @lc code=start
class Solution {
   public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        int i = 0;
        int k = 0;
        int num_max = 0;
        int take_num;
        int pos = 0;
        int sum = 0;

        for (i = 0; i < grumpy.size() - X + 1; i++) {
            take_num = 0;
            for (k = i; k < i + X; k++) {
                take_num += grumpy[k] * customers[k];
            }
            if (num_max < take_num){
                num_max = take_num;
                pos = i;
            }
        }

        for (i = 0; i < grumpy.size(); i++) {
            if (i == pos) {
                for (k = pos; k < pos + X; k++) {
                    grumpy[k] = 0;
                }
            }
        }

        for (i = 0; i < grumpy.size(); i++) {
            sum += (grumpy[i] ^ 1) * customers[i];
        }
        return sum;
    }
};

