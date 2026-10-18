#include <iostream>
#include <cmath> // thư viện pow và sqrt 
using namespace std;

int main() {
    double a,b,c,x1,x2;
    cout << "nhập 3 số a,b,c vào: ";
    cin >> a >> b >> c;
    // cho phương trình ax^2 +b*x +c=0
    if(a==0) cout << "x1=x2= " << -c/b;
    else {
        double y = pow(b,2)  - 4*a*c;
        cout << "delta= " << y << "\n";
        if (y<0) {
            cout << " phương trình vô nghiệm";
        } else if (y==0) {
            cout << "x1=x2= " << -b/(2*a);
        } else {
            double z = sqrt(y);
            cout << "x1=" << (-b+z)/(2*a) << "\n";
            cout << "x2=" << (-b-z)/(2*a) << "\n";
        }
    } 
    return 0;
}
