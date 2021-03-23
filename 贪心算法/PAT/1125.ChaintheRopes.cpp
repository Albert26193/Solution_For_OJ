#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int main() {
    int N = 0;
    int num = 0;
    int sum = 0;

    priority_queue<int,vector<int>,greater<int>> rope;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        rope.push(num * 2);
    }

    int m, n = 0;
    while (rope.size() > 1) {
        m = rope.top();
        rope.pop();
        n = rope.top();
        rope.pop();
        rope.push(((m + n) / 2));
    }

    cout << rope.top()/2;

    return 0;
}