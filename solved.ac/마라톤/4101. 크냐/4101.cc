#include <iostream>
using namespace std;

string testCase(int A, int B) {
    if(A-B>0)
        return "Yes";
    else
        return "No";
}

int main() {
    int input1, input2;
    while(true) {
        cin >> input1 >> input2;
        if(input1==0 && input2==0) 
            break; 
        cout << testCase(input1, input2) << endl;
    }
}