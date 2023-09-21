#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int a, output = 0, count = 0, cmp[100], save[100];
    for (int i = 0; i < 42; i++)
    {
        cmp[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        save[i] = a % 42;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 42; j++)
        {
            if (save[i] == cmp[j]) {
                output++;
                cmp[j] = 100;
            }
        }
    }
    cout << output;
    return 0;
}