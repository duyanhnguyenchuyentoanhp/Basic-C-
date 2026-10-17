#include <iostream>
using namespace std;

int main() {
    float a,b,c;
    cout << "nhập điểm kiểm tra: ";
    cin >> a;
    cout << "nhập điểm điểm giữa kì: ";
    cin >> b;
    cout << "nhập điểm cuối kì: ";
    cin >> c;
    float dtb= (a+b+c)/3;
    cout << "điểm trung bình của bạn là: " << dtb << "\n";
    if (dtb>=9) cout << " bạn học lực giỏi";
    else if (dtb>=5) cout << "bạn học lực khá";
    else cout << "bạn học lực kém";
    return 0;
}
