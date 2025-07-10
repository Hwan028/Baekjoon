#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    int N;
    cin >> N;
    for(int i=0; i<5*N -N; i++) {
        for(int k=0; k<N; k++) {
            cout << "@";
        }
        cout << "\n";
    }
    for(int i=0; i<N; i++) {
        for(int k=0; k<5*N; k++) {
            cout << "@";
        }
        cout << "\n";
    }
}