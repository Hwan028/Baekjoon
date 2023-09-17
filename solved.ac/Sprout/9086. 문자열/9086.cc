#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int c;
    char a[1000] = {0,};
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> a;
        for (int j = 0; j < 100; j++)
        {
            if (a[j] == 0)
            {
                cout << a[0] << a[j - 1] << "\n";
                break;
            }
        }
    }
    return 0;
}