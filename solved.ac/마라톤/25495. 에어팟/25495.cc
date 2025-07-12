#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N,temp=2,usage=2;
    cin >> N;
    int A[1001]={0};
    // if(N==0) usage=0;
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }

    for(int i=0; i<N-1; i++) {
        if(A[i]==A[i+1]) {
            temp *= 2;
            usage += temp;
        } else {
            temp = 2;
            usage += 2;
        }
        if(usage>=100) {
            usage = 0;
            temp = 1;
        }
    }
    cout << usage << "\n";
}