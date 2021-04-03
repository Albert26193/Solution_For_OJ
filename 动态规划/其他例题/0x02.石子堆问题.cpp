#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
const int INF = 1 << 30;

int findMinCost(int begin, int end, vector<vector<int>> dp) {
    for (int i = begin + 1; i < end; i++) {
        dp[begin][end] = min(dp[begin][i], dp[i + 1][end]);
    }
}