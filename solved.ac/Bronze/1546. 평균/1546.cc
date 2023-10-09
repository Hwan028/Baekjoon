#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    float N, max = 0, average = 0, input[1000];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> input[i];
        if (max < input[i]) max = input[i];
        
        average += input[i];
    }
    cout << average / N / max * 100;
}