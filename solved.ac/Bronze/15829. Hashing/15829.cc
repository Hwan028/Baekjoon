#include <iostream>
#define mod 1234567891
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    long long L, sum = 0, hash = 1;
    string input;
    cin >> L >> input;
    for (int i = 0; i < L; i++)
    {
        sum += (input[i] - 'a' + 1) * hash;
        hash = (hash * 31) % mod;
        sum %= mod;
    }
    cout << sum;
}