#include <bits/stdc++.h>
using namespace std;

int main() 
{
    freopen ("BAI1.INP","r",stdin);
    freopen ("BAI1.OUT","w",stdout);
    long long n , a, b , dem=0;
    cin >> n >> a >> b ;
    for (int x=1; x<=n; x++) {
        if(x%a==x%b) dem++;
    }
    cout << dem;
    return 0;
}
