#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll N,fact=1;
    cin >> N;
    for(int i=1; i<=N; i++)
    {
        fact *= i;
    }
    cout << fact;

    return 0;
}