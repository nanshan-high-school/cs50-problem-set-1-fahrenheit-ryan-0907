#include <iostream>
using namespace std;
int main() {
    cout << "請輸入有多少錢:";
    int sum2 = 0;

    int money;
    cin >> money;

    while (money != 0) {
        int sum = money % 10;
        money = money / 10;
        sum2 = sum2 + sum;
    }
    cout << "需要的錢幣數為:" << sum2;
}
