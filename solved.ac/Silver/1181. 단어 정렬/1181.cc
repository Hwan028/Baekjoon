#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
    if (a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N;
    cin >> N;
    vector<string> input(N);

    for (int i = 0; i < N; i++)
        cin >> input[i];

    sort(input.begin(), input.end(), compare);

    for (int i = 0; i < N; i++)
    {
        if (input[i] == input[i + 1])
            continue;
        else
            cout << input[i] << "\n";
    }
}