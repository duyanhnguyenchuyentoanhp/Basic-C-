#include <iostream>
using namespace std;
// Bắt đầu viết hàm:

void inFibo(int k) {
    long long a=1,b=1;
// Viết code để vẫn in ra a,b nếu in nhiều hơn 3 số:
    
    if (k>=1) cout << a << " ";
    if (k>=2) cout << b << " ";
    for(int i=3;i<=k;i++) {
        long long c=a+b;
// In ra kết quả sau mỗi lần i:
        
        cout << c << " ";
        a=b;
        b=c;
    }
    return;            // Kết thúc!
}

int main() {
    int n;
    cout << "nhập số thứ n: " << "\n";
    cin >> n;
// Ktra Đkien:
    
    if (n<1) cout << "sai số!";
    else inFibo(n);                        // In ra dãy!
    return 0;
}
