#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N, S;
    while(cin >> N >> S)
        cout << S / (N+1) << "\n";
}