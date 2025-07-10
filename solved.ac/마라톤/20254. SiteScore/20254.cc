#include <iostream>
using namespace std;

int siteScore(int a, int b, int c, int d) {
    return (a*56) + (24*b) + (14*c) + (6*d);
}

int main() {
    int i1,i2,i3,i4;
    cin >> i1 >> i2 >> i3 >>i4;
    cout << siteScore(i1,i2,i3,i4) << endl;
}