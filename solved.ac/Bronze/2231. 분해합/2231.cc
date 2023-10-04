#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, i, output = 0;
    cin >> N;
    for (i = 1; i < N; i++)
    {
        int temp = i, sum = 0;
        
        while (temp != 0)
        {
            sum += temp % 10;
            temp = temp / 10;
        }

        if (sum + i == N)
        {
            output = i;
            break;
        }
    }
    cout << output;
}