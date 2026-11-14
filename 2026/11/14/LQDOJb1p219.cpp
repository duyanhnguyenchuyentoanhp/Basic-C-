// Input : nhập vào 5 số nguyên a,b,c,d,e trog khoảng 1 đến 1000
// Output : in ra YES nếu có đúng 4 số giống nhau, NO nếu ngược lại.

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int s[5];
    for (int i=0;i<5;i++) cin >> s[i];
    sort(s,s+5);
 //   for (int i=0;i<5;i++) cout << s[i] << "\n";
    int dem=1;
    int kqua=0;
    for (int i=0;i<5;i++) {
        if (s[i]==s[i+1]) dem++;
        else dem=1;
        if (dem>kqua) kqua=dem;
  //      cout << i <<  " " << s[i] << " "  << s[i+1] << " " << dem << "\n";
    }
 //   cout << kqua << "\n";
    if (kqua==4) cout << "YES";
    else cout << "NO";
    return 0;
}
