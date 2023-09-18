#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T, H, W, N, count = 0, output = 0, H_Num[100][100] = {0,};
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> H >> W >> N;
        for (int j = 1; j <= W; j++)
        {
            for (int k = 1; k <= H; k++)
            {
                H_Num[k][j] = 100 * k + j;
                count++;
                if (count == N)
                    output = H_Num[k][j];
            }
        }
        cout << output << "\n";
        count = 0;
    }
    return 0;
}