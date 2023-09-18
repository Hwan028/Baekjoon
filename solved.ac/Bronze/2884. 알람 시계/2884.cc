#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int H, M;
    cin >> H >> M;
    if (M - 45 >= 0)
    {
        cout << H << " " << M - 45;
    }
    else
    {
        if (H != 0)
        {
            H--;
            cout << H << " " << 60 + (M - 45);
        }
        else
        {
            H = 23;
            cout << H << " " << 60 + (M - 45);
        }
    }
    return 0;
}