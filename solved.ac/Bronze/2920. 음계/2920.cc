#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int count = 0, asc, des, mix, scale[100];
    for (int i = 1; i <= 8; i++)
    {
        cin >> scale[i];
    }
    for (int i = 1; i <= 8; i++)
    {
        if (scale[i] == i)
            count++;
        else if (scale[i] == 9 - i)
            count--;
    }
    if (count == 8)
        cout << "ascending";
    else if (count == -8)
        cout << "descending";
    else
        cout << "mixed";
    return 0;
}