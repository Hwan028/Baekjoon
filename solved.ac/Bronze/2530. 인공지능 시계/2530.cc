#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int A, B, C, D, sec=0;
    cin >> A >> B >> C >> D;
    sec = (A*60*60 + B*60 + C + D) % 86400;
    A = sec / 3600;
    sec %= 3600;
    B = sec / 60;
    sec %= 60;
    C = sec;
    cout << A << " " << B << " " << C;
}