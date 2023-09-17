#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, max = -1000000, min = 1000000;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (max < arr[i])
            max = arr[i];

        if (min > arr[i])
            min = arr[i];
    }
    cout << min << " " << max;
    return 0;
}