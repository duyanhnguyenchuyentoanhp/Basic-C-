#include <bits/stdc++.h>
using namespace std;

long long tinhdientich(long long x, long long y) {
    return x*y;
}
int main() {
    if (fopen("HCNMAX.INP","r")) {
        freopen("HCNMAX.INP","r",stdin);
        freopen("HCNMAX.OUT","w",stdout);
    }
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long long k=tinhdientich(a,b);
    long long q=tinhdientich(c,d);
    cout << max(k,q);
    return 0;
}
