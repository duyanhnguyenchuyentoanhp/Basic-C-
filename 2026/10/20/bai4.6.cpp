#include <iostream>
using namespace std;
void inFibo(int k) {
    long long a=1,b=1;
    if (k>=1) cout << a << " ";
    if (k>=2) cout << b << " ";
    for(int i=3;i<=k;i++) {
        long long c=a+b;
        cout << c << " ";
        a=b;
        b=c;
    }
    return;
}

int main() {
    int n;
    cout << "nhập số thứ n: " << "\n";
    cin >> n;
    if (n<1) cout << "sai số!";
    else inFibo(n);
    return 0;
}
