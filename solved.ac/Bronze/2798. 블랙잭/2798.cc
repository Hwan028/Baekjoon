#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, M, sum = 0, output = 0, arr[100] = {0,};
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if(sum > output && sum <= M) output = sum;
            }
        }
    }
    cout << output;
}