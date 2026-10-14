#include <iostream> // nghịch thử hàm
using namespace std;

int timGtln( int a, int b, int c) {
    return max(a,max(b,c));
}
int main() 
{
    int a,b,c;
    cin >>a>>b>>c;
    int kq = timGtln( a, b, c);
    cout << kq;
    return 0;
}
