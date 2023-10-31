#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isBig(pair<int, int>& a, pair<int, int>& b) {
    return (a.first < b.first) && (a.second < b.second);
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N, x, y;
    cin >> N;
    vector<pair<int, int>> input(N);

    for(int i=0; i<N; i++) {
        cin >> x >> y;
        input[i] = pair<int, int>(x, y);
    }

    for(int i=0; i<N; i++) {
        int count=1;
        for(int j=0; j<N; j++) {
            if(isBig(input[i], input[j]))
                count++;
        }
        cout << count << " ";
    }
}
