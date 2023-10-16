#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N, count=0;
    for(int i=0; i<3; i++)
    {   
        count = 0;
        for(int j=0; j<4; j++)
        {
            cin >> N;
            if(N > 0) count++;
        }
        switch(count) {
            case 0: cout << "D\n";break;
            case 1: cout << "C\n";break;
            case 2: cout << "B\n";break;
            case 3: cout << "A\n";break;
            case 4: cout << "E\n";break;
        }
    }
}