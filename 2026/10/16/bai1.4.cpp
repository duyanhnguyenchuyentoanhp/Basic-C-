#include <iostream>
#include <string> // thư viện để nhập chuỗi kí tự
using namespace std;

int main() {
    string ten;
    cout << "nhập tên người dùng:";
    getline(cin, ten); // để lấy cả được toàn bộ tên 
    cout << "tên người dùng là:" << ten << endl;
    return 0;
}
