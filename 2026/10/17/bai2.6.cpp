#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << "gtri cua x:\t\t| "<< "bieu thuc\t\t|" << "     ket qua\t\t" << "\n";
    cout << x << "       \t\t| " << "    x++\t\t|" << "\t\t" << x+1 << "\n"; // 2 tab ở giữa để thẳng hàng trên
    cout << x << "       \t\t| " << "    x--\t\t|" << "\t\t" << x-1 << "\n";
    cout << x << "       \t\t| " << "    ++x\t\t|" << "\t\t" << x+1 << "\n";
    cout << x << "       \t\t| " << "    --x\t\t|" << "\t\t" << x-1 << "\n";
    return 0;
}
