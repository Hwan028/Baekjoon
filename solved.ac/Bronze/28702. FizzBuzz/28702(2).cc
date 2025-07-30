#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int idx,target;
    string input[3];
    for(int i=0; i<3; i++) {
        cin >> input[i];
    }

    for(int i=0; i<3; i++) {
        if(input[i] != "Fizz" && input[i] != "Buzz" && input[i] != "FizzBuzz") {
            idx = i;
        }
    }
 
    target = stoi(input[idx]) + 3-idx;
    
    if(target %15 ==0) {
        cout << "FizzBuzz\n";
    } else if(target %3 ==0) {
        cout << "Fizz\n";
    } else if(target %5 ==0) {
        cout << "Buzz\n";
    } else {
        cout << target << "\n";
    }

    return 0;
}