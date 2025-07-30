#include <iostream>
#include <string>
using namespace std;
//시간 초과
int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int count=0;
    string temp,input[3];
    for(int i=0; i<3; i++) {
        cin >> input[i];
    }

    for(int i=1; i<=100000001; i++) {
        if(i%3==0 && i%5>0) {
            temp = "Fizz";
        } else if(i%3>0 && i%5==0) {
            temp = "Buzz";
        } else if(i%15==0) {
            temp = "FizzBuzz";
        } else {
            temp = to_string(i);
        }

        if (count==3) { 
            cout << temp << "\n";
            break;
        }        

        if(temp==input[count]) {
            count ++;
        } else {
            count =0;
        }
    }

    return 0;
}