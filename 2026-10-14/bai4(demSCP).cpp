#include <bits/stdc++.h> // https://lqdoj.edu.vn/problem/26hsg9hye2
using namespace std;

long long can( int n) {
    long long k= sqrt(n);
    while( k * k > n ) k--;
    while( (k+1) * (k+1) <= n) k++;
    return k;
}

int main() {
    if(fopen("CAU1.INP","r")) {
        freopen("CAU1.INP","r",stdin);
        freopen("CAU1.OUT","w",stdout);
    }
    int a,b;
    cin >> a >> b;
    cout << can(b)- can(a-1);
    return 0;
}
