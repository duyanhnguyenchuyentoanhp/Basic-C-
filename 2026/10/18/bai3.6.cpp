#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "doanh số bán hàng là: ";
    cin >> a;
    if (a<=100) cout << "hoa hồng là: " << (double) a*0.05 << "triệu";
    else if (a<=300) cout << "hoa hồng là: " << (double) a*0.1 << "triệu";
    else cout << "hoa hồng là: " << (double) a*0.2 << "triệu";
    return 0;
}
