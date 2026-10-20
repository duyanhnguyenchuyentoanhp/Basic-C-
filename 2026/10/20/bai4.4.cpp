#include <iostream>
#include <cmath>                                     // dùng cho lũy thừa 
using namespace std;

int main() { 
    int x;
    cout << "nhập một số nguyên x: ";
    cin >> x;
    int i = 1;
    double S = 0;
    double luythua = pow(x,1);                         //  lũy thừa
    double giaithua = 1;                               // giai thừa
    int dau = 1;
    while (i <= 9) {
        S = S + dau * luythua / giaithua;
                                                  // đã xong công thức cho x^1/1!
                                                  // bắt đầu các bước tiếp theo:
        dau = -dau;
        luythua = luythua * x * x;               // để nhân từ mũ 1>3>5>7>9
        giaithua = giaithua * (i+1) * (i+2);
        cout << giaithua << "\n";                 // check thử có đúng ko
        i += 2;
    }
    cout << S;
    return 0;
}
