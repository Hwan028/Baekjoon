#include <iostream>
using namespace std;

int GCD(int a, int b) {
    int c = a % b;
    while(c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}
int LCM(int a, int b) {
    return  a * b / GCD(a, b);
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N1, N2;
    cin >> N1 >> N2;
    cout << GCD(N1, N2) << "\n" << LCM(N1, N2);
}