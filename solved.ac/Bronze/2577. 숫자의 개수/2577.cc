#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int A, B, C, i = 0, product = 0, save[100], count[10] = {0,};
    cin >> A >> B >> C;
    product = A * B * C;

    while (1)
    {
        save[i] = product % 10;
        product = product / 10;
        i++;
        if (product <= 0)
            break;
    }

    for (int k = 0; k < i; k++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (save[k] == j)
                count[j] += 1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << count[i] << "\n";
    }
    return 0;
}