#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    string N;
    while (1)
    {
        int count = 0;
        cin >> N;
        if (N == "0")
            break;

        for (int i = 0; i < N.length() / 2; i++)
        {
            if (N[i] != N[N.length() - (i + 1)])
                count++;
        }
        if (count == 0)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }
}