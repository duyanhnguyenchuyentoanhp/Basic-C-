#include <iostream>
using namespace std;

int main() {
    int n; // nhap tong so luong dong
    cin >> n;
    for(int i=1; i<=n; i++) { // lay so dong cho moi lan
        for( int j=1; j<=i;j++) // lay so luong * de in ra
        cout << "*"; 
        cout << endl; // ket thuc 1 vong i roi quay lai
    } return 0;
}
