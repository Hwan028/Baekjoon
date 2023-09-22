#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T, score, raise = 0;
    string OX;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        score = 0;
        raise = 0;
        cin >> OX;
        for (int j = 0; j < OX.length(); j++)
        {
            if (OX[j] == 'O')
            {
                raise++;
                score += raise;
            }
            else
            {
                raise = 0;
            }
        }
        cout << score << "\n";
    }
    return 0;
}