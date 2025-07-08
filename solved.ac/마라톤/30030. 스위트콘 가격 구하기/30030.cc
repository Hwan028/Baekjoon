#include <iostream>
using namespace std;

int cal(int a) {
    return a/11*10;
}

int main(){
    int input;
    cin >> input;
    for( ; ; ){
        if(input >= 1100 && input <= 9900)
            break;
        else
            cin >> input;
    }
    cout << cal(input);
}