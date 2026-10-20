#include <iostream>
using namespace std;

int main() { 
    int n;
    cout << "nhập số các số hạng bạn muốn viết: ";
    cin >> n;
    long long a=1, b=1;
    cout <<a << "\n" <<b << "\n";
    for (int i =3; i<=n ; i++) {
        long long c = a + b;
        cout << c << "\n";
        a=b;                  // để đổi chỗ a=>b, b=>c rồi cộng tiếp
        b=c;
    }
    return 0;
}
