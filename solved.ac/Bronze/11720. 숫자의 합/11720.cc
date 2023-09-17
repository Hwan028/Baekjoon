#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str;
    int N, sum = 0;
    cin >> N;
    cin >> str;
    for (int i = 0; i < N; i++)
    {
        sum += int(str[i]) - 48;
    }
    cout << sum;
    return 0;
}