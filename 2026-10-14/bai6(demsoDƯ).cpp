#include <bits/stdc++.h>
using namespace std;

int main() {
    if(fopen("BAI1.INP","r")) {
        freopen ("BAI1.INP","r",stdin);
        freopen ("BAI1.OUT","w",stdout);
    }
    long long n , a, b , dem=0;
    cin >> n >> a >> b ;
    for (long long x=1; x<=n; x++) {
        if(x%a==x%b) dem++;
    }
    cout << dem;
    return 0;
}
