#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int N, num, arr[10001] = {0,};
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        arr[num] += 1;
    }
    for (int i = 1; i <= 10000; i++)
    {
        if (arr[i])
        {
            for (int j = 1; j <= arr[i]; j++)
            {
                cout << i << "\n";
            }
        }
    }
}