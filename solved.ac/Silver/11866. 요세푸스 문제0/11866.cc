#include <iostream>
#include <queue>
using namespace std;

string josephus(int N, int K)
{
    string result;
    queue<int> survive;
    for (int i = 1; i <= N; i++)
        survive.push(i);

    while (survive.size() > 0)
    {
        for (int i = 1; i < K; i++)
        {
            int temp = survive.front();
            survive.pop();
            survive.push(temp);
        }
        result += to_string(survive.front());
        if (survive.size() != 1)
            result += ", ";
        survive.pop();
    }
    return "<" + result + ">";
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N, K;
    cin >> N >> K;
    cout << josephus(N, K);
}