#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int jump = 1; jump < N - i; jump++)
        {
            cout << " ";
        }
        for (int star = 0; star <= i; star++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}