#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N;
    cin >> N;
    for(int i=0; i<N; i++)
        cout << N-i << "\n";
}