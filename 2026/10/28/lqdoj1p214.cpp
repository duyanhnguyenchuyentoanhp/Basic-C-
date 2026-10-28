#include <iostream>
using namespace std;
/* Cô giáo có n số nguyên từ 1 tới n. Cô sắp xếp dãy số này lại theo một cách khá đặc biệt. 
Cô xếp tất cả các số lẻ theo thứ tự từ bé đến lớn trước, hết các số lẻ thì cô mới xếp đến các số 
chẵn, cũng theo thứ tự từ bé đến lớn. Bé Bi thấy dãy số này và tự hỏi số thứ k của dãy sẽ là số nào. 
Hãy giúp bé nhé!
Input:
2 số nguyên dương n,k (k≤n≤10^12).
Output:
Hãy in ra số thứ k trong dãy.*/

int main() {
    long long n,k;
    cin >> n >> k;
  // xét trường hợp n lẻ:
    if(n%2!=0) {
  // với k nằm trog dãy số lẻ: từ 1 đến n(lẻ)
        if (k>=1 && k<=(n+1)/2) cout << 2*k-1;         // tính được k
  // với k nằm trog dãy số chẵn: từ 2 đến n-1
        else cout << (k-(n+1)/2) *2; 
    }
  // xét trường hợp n chẵn:
    else {
  // với k năm trong dãy lẻ: từ 1 đến n-1
        if (k>=1 && k<=n/2) cout << 2*k-1;
  // với k trong dãy chẵn: từ 2 đến n
        else cout << (k-n/2) *2;
    }
    return 0;
}
