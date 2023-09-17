#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, v, arr[99], count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num = 0;
        cin >> num;
        arr[i] = num;
    }
    cin >> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v)
            count += 1;
    }
    cout << count;

    return 0;
}