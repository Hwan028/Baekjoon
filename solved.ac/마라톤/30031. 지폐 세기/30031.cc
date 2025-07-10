#include <iostream>
using namespace std;

int countBills(int W, int D) {
    if(D==68) {
        switch (W) {
            case 136:
                return 1000;
            case 142:
                return 5000;
            case 148:
                return 10000;
            case 154:
                return 50000;
            default:
                return 0;
        }
    } else {
        return 0;
    }
}

int main() {
    int N, sum=0;
    cin >> N;
    for(int i=0; i<N; i++) {
        int W, D;
        cin >> W >> D;
        sum += countBills(W,D);
    }
    cout << sum << endl;
}