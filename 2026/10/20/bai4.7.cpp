#include <iostream>
using namespace std;

int main() { 
    int a;
    cout << "nhập 1 số bất kì để tính giai thừa: ";
    cin >> a;
    long long giaithua = 1;
    for(int i=1; i<=a; i++) {
        giaithua  = giaithua *i;
    }
    cout << "a! = " << giaithua;
    return 0;
}
