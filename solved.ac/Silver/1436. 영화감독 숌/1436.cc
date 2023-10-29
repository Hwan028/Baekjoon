#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N, count = 0;
    cin >> N;
    for (int i = 665;; i++)
    {
        int cmp = i;
        while (cmp > 665)
        {
            if (cmp % 1000 == 666)
            {
                count++;
                break;
            }
            else
                cmp /= 10;
        }
        if (N == count)
        {
            cout << i;
            break;
        }
    }
}