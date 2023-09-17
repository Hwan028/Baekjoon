#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        for(int star=0; star<=i; star++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}