// Nhập 1 xâu S và in ra số thứ M.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int M;
    cin >> M;
    int dem=0;
    for (int i=0; i< s.size();i++) {
    if (s[i]==' ') dem++;
    if (dem==(M-1)) cout << s[i];
    }
    return 0;
}
