#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int A, B, V, output=1;
    cin >> A >> B >> V;
    output += (V-A) % (A-B) == 0 ? (V-A) / (A-B) : (V-A) / (A-B) + 1;
    cout << output;
}