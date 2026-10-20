#include <iostream>
using namespace std;

int main() { 
    int n;
    cout << "nhập 1 số bất kì: ";
    cin >> n;
    int dem=0;
    for (int i=1; i*i<=n; i++) {
        if (n%i==0) 
        dem++;
    } 
    if (n>=2 && dem==1) 
    cout << n << " là số nguyên tố.";
    else cout << n << " ko pk số nguyên tố.";
    return 0;
}
