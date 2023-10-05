#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, temp=0, output=1, modify=1;
    cin >> N;
    for(int i=1; i<=1000000000; i++)
    {
        if(i == N)
        {
            cout << output;
            break;
        }
        if(i == modify)
        {
            temp += 6;
            modify += temp;
            output++;
        }
    }
}