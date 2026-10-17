#include <iostream>
#include <cmath> // thư viện để tính toán cho pow
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    int p=x*y, s=x+y;
    cout << "total = s^2 + s*(p-x)*(p+y) = " << pow(s,2) + s*(s-x)*(p+y);
    return 0;
}
