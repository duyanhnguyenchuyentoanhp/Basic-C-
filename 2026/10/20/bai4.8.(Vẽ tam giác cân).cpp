#include <iostream>
#include <string>
using namespace std;

int main() { 
    int n;
    cout << "nhập số dòng: ";
    cin >> n;
    for(int i=1; i<=n; i++) {           // i là với mỗi dòng:
    
        // Tạo chuỗi số dấu cách (số dấu cách= tổng số dòng - số thứ tự dòng)
        string dau_cach(n-i,' '); 
        // Tạo chuỗi số dấu sao (số sao= số thứ tự dòng x2 - 1)
        string dau_sao(2*i-1, '*');
        // In ra cho mỗi dòng!
        cout << dau_cach << dau_sao << "\n"; 
    }
    return 0;
}
