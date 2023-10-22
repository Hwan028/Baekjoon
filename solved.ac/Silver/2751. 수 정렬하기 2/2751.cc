#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N, a[1000000] = {0,};
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> a[i];
    sort(a,a+N);
    for (int i=0; i<N; i++)
        cout << a[i] << "\n";
}