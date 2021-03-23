#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

struct Mooncake {
    double inventory;
    double price;
    double avarage;
};

bool cmp(Mooncake m1, Mooncake m2) {
    return m1.avarage > m2.avarage;
}

int main() {
    int N = 0;
    int D = 0;
    double profit = 0;

    cin >> N >> D;

    vector<Mooncake> mooncake(N);

    int i = 0;
    for (i = 0; i < N; i++) {
        cin >> mooncake[i].inventory;
    }

    for (i = 0; i < N; i++) {
        cin >> mooncake[i].price;
        mooncake[i].avarage = mooncake[i].price / mooncake[i].inventory;
    }

    sort(mooncake.begin(), mooncake.begin() + N, cmp);
    for (i = 0; (i < N) && (D > 0); i++) {
        profit += min(double(D), mooncake[i].inventory) * mooncake[i].avarage;
        D = D - min(double(D), mooncake[i].inventory);
    }
    printf("%.2f", profit);
    return 0;
}