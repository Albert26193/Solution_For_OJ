#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(const int& a,const int& b){
    return a < b;
}

int main(){
    int len = 0;
    int sum_1 = 0;
    int sum_2 = 0;

    cin >> len;
    vector<int> num(len);
    for(int i = 0; i < len ;i++){
        cin >> num[i];
    }

    sort(num.begin(),num.end(),cmp);

        for(int i = 0; i < len / 2;i++){
            sum_1 += num[i];
        }
        for(int i = len / 2; i < len ;i++){
            sum_2 += num[i];
        }

        cout << len % 2 << " " << sum_2 - sum_1;

    return 0;
}