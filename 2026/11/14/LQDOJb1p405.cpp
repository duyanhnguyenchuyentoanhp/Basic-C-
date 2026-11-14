// Nhập 2 xâu và đếm số kí tự xuất hiện tỏg cả 2 xâu.

#include <bits/stdc++.h>
using namespace std;
int dd[256];
int main()
{
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    for (int i=0; i<s.size(); i++) {
        for (int j=0; j< t.size();j++) {
            if(s[i]==t[j]) {
                dd[int(s[i])]=1;
            }
        }
    }
    int kqua=0;
    for(int i=0;i<256;i++) {
        kqua+= dd[i];
    }
    cout << kqua;
    return 0;
}
