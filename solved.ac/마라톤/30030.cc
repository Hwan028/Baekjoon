#include <iostream>
using namespace std;

int cal(int B) {
    return B-B/10;
}

int main(){
    int B;
    cin >> B;
    for( ; ; ){
        if(B >= 1100||B <= 9900)
            break;
        else
            cin >> B;
    }
    cout << cal(B);
}