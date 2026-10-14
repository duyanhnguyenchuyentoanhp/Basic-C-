#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int X,Y,a,b,c,d;
    cin>> X >> Y>>a>>b>>c>>d;
    long long k= X+Y;
    if(k==a) {
        cout << "A";
    } else  if(k==b) {
        cout << "B";
    } else if(k==c) {
        cout << "C";
    } else {
        cout << "D";
    }
    return 0;
}
