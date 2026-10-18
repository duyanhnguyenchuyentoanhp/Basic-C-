#include <iostream>
using namespace std;

int main() { 
    int a;
    cout << "nhập 1 số nguyên bất kì: ";
    cin >> a;
    for (int i=1; i <=15; i++) {
        cout << "bội của " << a << " với số " <<  i <<  " là: " << a*i << "\n";
    }
    return 0;
}
