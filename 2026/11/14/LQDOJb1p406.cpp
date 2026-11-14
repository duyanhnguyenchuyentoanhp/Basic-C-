// Nhập 1 xâu và check xem đủ 26 kí tự Latin ko.

#include <bits/stdc++.h>
using namespace std;
int dd[26];

int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++) {
        dd[int(s[i])]= 1;
        if ('a' <= s[i] && s[i] <= 'z') dd[s[i]-'a'] = 1;
        else if('A' <= s[i] && s[i] <= 'Z') dd[s[i]-'A'] = 1;
    }
    int kqua=0;
    for (int i=0; i<26;i++) {
        kqua+= dd[i];
    }
  //  cout << kqua;
    if (kqua==26) cout << "YES";
    else cout << "NO";
    return 0;
}
