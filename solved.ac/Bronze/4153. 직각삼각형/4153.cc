#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num[10];
    while(1)
    {
        for(int i=0; i<3; i++) cin >> num[i];

        sort(num, num+3);
        
        if(num[0]*num[0] + num[1]*num[1] == num[2]*num[2]) {
            if(num[2]==0) break;
            else cout << "right" << "\n";
        } else cout << "wrong" << "\n";
    }
}