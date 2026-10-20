#include <iostream>
using namespace std;

int main() { 
    int chon = -1;
    cout << "có thông báo:... " << "\n";
    cout << "chọn 1 thông báo(1-2-3): ";
    cin >> chon;
    switch(chon) {
        case 1:
        cout << "messenger";
        break;
        case 2:
        cout << "zalo";
        break;
        case 3:
        cout << "facebook";
        break;
        default: 
        cout << "không có thông báo";
        }
    return 0;
}
