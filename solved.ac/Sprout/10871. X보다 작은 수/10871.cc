#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, X;
    cin >> N >> X;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        if (num < X)
            cout << num << " ";
    }

    return 0;
}