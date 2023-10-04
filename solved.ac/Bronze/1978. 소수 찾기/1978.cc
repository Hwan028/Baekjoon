#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, output = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int input[100]= {0,}, count = 0;
        cin >> input[i];
        for (int j = 2; j <= input[i]; j++)
        {
            if (input[i] % j == 0)
                count++;
        }
        if (count == 1)
            output++;
    }
    cout << output;
}