#include <iostream>
using namespace std;

int search(int N) {
    int k=1;
    while(1) {
        if(N == 1 + k + k*k)
            return k;
        else 
            k++;
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int N;
    cin >> N;
    cout << search(N) << endl;
}