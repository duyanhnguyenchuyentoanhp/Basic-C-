#include <iostream>
using namespace std;

int main() { 
    int x;
    cout << "phí thuê bao là: 25 nghìn đồng" << "\n";
    cout << "nhập số phút gọi của bạn: ";
    cin >> x;
    if (x<=50) cout << "phí cước là: " << 25+0.6*x << " nghìn đồng";
    else if (x<=200) cout << "phí cước là: " << 25+0.6*x+0.4*(x-50) << "nghìn đồng";
    else cout << "phí cước là: " << 25+0.6*x+0.4*(x-50) + 0.2*(x-200) << "nghìn đồng";
    return 0;
}
