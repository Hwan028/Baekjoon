#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, output = 1, modify = 1;
    cin >> N;
    for (int i = 0;; i++)
    {
        modify += 6 * i;
        if (N <= modify)
        {
            output = i;
            break;
        }
    }
    cout << output + 1;
}
