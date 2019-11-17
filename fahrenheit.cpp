#include <iostream>
using namespace std;
int main() {
    cout << "請輸入攝氏溫度:";
    float c;
    cin >> c;
    float f = ((c * 9) / 5) + 32;
    cout << "華氏溫度為" << f;
}
