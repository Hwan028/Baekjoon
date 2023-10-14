#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int x, y, w, h;
    cin >> x >> y >> w>> h;
    cout << min({x, y, w-x, h-y});
}