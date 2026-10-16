#include <iostream>
#include <algorithm> // ham thuat toan cho max,min,swap
using namespace std;

int main() {
    int a,b,c;
    cin >> a>> b>> c;
    // CÁCH 1:
    int MAX= max(a,max(b,c));
    int MIN= min(a,min(b,c));
    int TONG= a+b+c;
    cout << MIN << TONG-MIN-MAX << MAX << endl;
    cout << MAX << TONG-MIN-MAX << MIN << endl;
    cout << endl;
    // CÁCH 2:
    if (a>b) swap(a,b); // => a<b
    if (a>c) swap(a,c); // => a<c
    if (b>c) swap(b,c); // => b<c
    // => a be nhat, c lon nhat
    cout << a << b << c << endl;
    cout << c << b << a << endl;
    return 0;
}
