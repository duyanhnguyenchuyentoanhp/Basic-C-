#include <iostream>
using namespace std;

int main() { 
    int n,x;
    cout << "nhập số lượng số n: ";
    cin >> n;
    int dem = 0;
    while (dem < n) {
        cout << "nhập thêm 1 số thứ " << dem+1 << ": ";
        cin >> x;
        if (x<0) {
            cout << "đây là số âm, hủy vòng lặp!!! ";
            break;
        } 
        dem ++;
    }
    return 0;
}
