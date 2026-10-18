#include <iostream>
using namespace std;

int main() { 
    int x;
    cout << "nhập lương của bạn: ";
    cin >> x;
    if (x>=15) cout << " tiền lương ròng là: " << x*0.7 << " triệu đồng";
    else if (x>=7) cout << " tiền lương ròng là: " << x*0.8 << " triệu đồng";
    else cout << " tiền lương ròng là: " << x*0.9 << " triệu đồng";
    return 0;
}
