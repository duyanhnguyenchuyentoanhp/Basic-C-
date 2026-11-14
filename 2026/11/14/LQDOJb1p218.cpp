// Input: nhập 5 số a,b,c,d,e trong khoảng -10 mũ 8 đến 10 mũ 8.
// Output: 1 số nguyên là số xuất hiện nhiều nhất, nếu bằng nhau thì in ra số có giá trị lớn nhất. 

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int s[5];
    for(int i=0;i<5;i++) cin >> s[i];
    int soLan=0;
    int lonNhat=s[0];
    for(int i=0;i<5;i++) {
        int dem=0;
        for(int j=0;j<5;j++) {
            if(s[i]==s[j]) dem++;
        }
        if(dem>soLan || (dem==soLan && s[i] > lonNhat) ) {
        soLan=dem;
        lonNhat=s[i];
    }
    }
    cout << lonNhat;
    return 0;
}
