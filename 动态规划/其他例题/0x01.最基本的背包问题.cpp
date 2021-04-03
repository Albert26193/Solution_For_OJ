#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;
/*
	0-1 背包问题（迭代版）
	输入：
		products_count：商品的数量
		capacity：背包的容量
		weight_array：商品重量数组
		value_array：商品价格数组
		result：结果数组
*/

void knapsack(int products_count, int capacity, vector<int> &weight_array, vector<int> &value_array, vector<vector<int>> &result) {
    for (int i = 1; i <= products_count; i++) {
        for (int j = 1; j <= capacity; j++) {
            //如果第i件商品超过了背包的最大容量
            if (weight_array[i] > j) {
                result[i][j] = result[i - 1][j];
            } else {
                result[i][j] = max(result[i - 1][j - weight_array[i]] + value_array[i], result[i - 1][j]);
            }
        }
    }
}

int main() {
    int products_count = 0, capacity = 0;
    vector<int> weight_array(1, 0);
    vector<int> value_array(1, 0);
    cout << "please input the counts and capacity: " << endl;
    cin >> products_count >> capacity;
    cout << "please input the weight array for " << products_count << " products" << endl;
    for (int i = 1; i <= products_count; i++) {
        int tmp = 0;
        cin >> tmp;
        weight_array.push_back(tmp);
    }
    cout << "please input the value array for " << products_count << " products" << endl;
    for (int i = 1; i <= products_count; i++) {
        int tmp = 0;
        cin >> tmp;
        value_array.push_back(tmp);
    }
    vector<vector<int>> result(products_count + 1, vector<int>(capacity + 1, 0));
    knapsack(products_count, capacity, weight_array, value_array, result);
    cout << "knapsack result is " << result[products_count][capacity] << endl;
    return 0;
}