#include <iostream>
using namespace std;

int main() {
    cout << "請輸入攝氏溫度: ";
    float cTemp;
    cin >> cTemp;

    float fTemp;
    fTemp = ( (cTemp * 9) / 5) + 32;
    cout << fTemp << "\n";
}
