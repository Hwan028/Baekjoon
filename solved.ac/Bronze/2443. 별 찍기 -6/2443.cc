#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    for (int i = N; i > 0; i--)
    {
        for (int j = 0; j < N - i; j++)
            cout << " ";
        for (int s = 0; s < 2 * i - 1; s++)
            cout << "*";
        cout << "\n";
    }
}