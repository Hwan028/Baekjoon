#include <iostream>
using namespace std;

int factorial(int i) {
    int fact=1;
    while(i != 0)
    {
       fact *= i;
       i--;
    }
    return fact;
}
int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N, K, output;
    cin >> N >> K;
    if(K < 0 || K>N)
        output = 0;
    else {
        output = factorial(N) / (factorial(K) * factorial(N-K));
    }
    cout << output;
}