#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N,P,T,count=0,Tsize[6]={0};
    
    cin >> N;
    for(int i=0; i<6; i++) {
        cin >> Tsize[i];
    }
    cin >> T >> P;

    for(int i=0; i<6; i++) {
        if(Tsize[i] % T == 0) {
            count += Tsize[i] / T;
        } else {
            count += Tsize[i] / T + 1;
        }
    }

    cout << count << "\n";
    cout << N/P << " " << N%P;

}