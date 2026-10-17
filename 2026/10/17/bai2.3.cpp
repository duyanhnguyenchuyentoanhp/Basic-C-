#include <iostream>
using namespace std;

int main() {
    int v0; // v ban đầu
    float t,a; // thời gian và gia tốc
    cin >> v0 >> t >> a;
    int v1= a * t + v0; // v cuối cùng
    cout << v1;
    return 0;
}
