#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll N,M,sum;
    cin >> N >> M;
    sum = N-M;
    if(sum > 0)
    cout << sum;
    else
    cout << -sum;

    return 0;    
}