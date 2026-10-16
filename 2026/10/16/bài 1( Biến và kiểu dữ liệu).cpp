#include <iostream> // thư viện nhập xuất
#include <string> // thư viện để nhập chuỗi kí tự(tên)
using namespace std;

int main() {
    string ten;
    cout << "nhập tên của bạn:"; // dùng để nhập tên
    getline(cin, ten); // dùng để đọc cả dòng tên
    cout << "hello " << ten << endl;
    int tuoi;
    cout << "bạn bao nhiêu tuổi? -";
    cin >> tuoi; // để nhập tuổi
    if (tuoi <13) cout << "=> bạn ko đc chơi game" << endl;
    else cout << "=> bạn đc chơi game" << endl;
    return 0;
}
