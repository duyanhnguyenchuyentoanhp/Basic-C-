// Input : Nhập 1 xâu S, số dòng M và M kí tự.
// Output: In ra số lần xuất hiện cho mỗi kí tự. 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int M;
    cin >> M;
    char t;
    for (int i=1; i<=M; i++) {
        cin >> t;
        int dem=0;
        for (int i=0; i< s.size();i++) {
            if(s[i]==t) {
                dem++;
            }
        }
        cout << dem << "\n";
    }
    return 0;
}
