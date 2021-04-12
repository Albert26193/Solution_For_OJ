/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */
// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// @lc code=start
//TODO
// 希望使用dp和分治法再做一次
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*
        int sum = 0;
        int findmax = INT_MIN;
        for(int i = 0; i < nums.size();i++){
            sum += nums[i];
            findmax = max(findmax,sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return findmax;
        */

        vector<int> EndWithPostion(1);
        EndWithPostion[0] = nums[0];
        int temp = 0;
        int findmax = nums[0];
        for(int i = 1; i < nums.size(); i++){
            temp = max(EndWithPostion[i - 1] + nums[i],nums[i]);
            EndWithPostion.push_back(temp);
            findmax = max (temp,findmax);
        }
        return findmax;
    }
};

// int main(){
//     int i = 0;
//     vector<int> nums;
//     nums.push_back(-2);
//     nums.push_back(1);
//     nums.push_back(-3);
//     nums.push_back(4);
//     nums.push_back(-1);
//     nums.push_back(2);
//     nums.push_back(1);
//     nums.push_back(-5);
//     nums.push_back(4);
//     cout << "ok" << endl;
//     Solution my_solution;
//     i = my_solution.maxSubArray(nums);
//     cout << i << " is the max num " << endl;
//     return 0;
// }
// @lc code=end

