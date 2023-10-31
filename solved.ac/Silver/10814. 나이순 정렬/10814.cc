#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<int, string> &a, const pair<int, string> &b)
{
    return a.first < b.first;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N, age;
    string name;
    vector<pair<int, string>> ioput;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> age >> name;
        ioput.push_back(pair<int, string>(age, name));
    }

    stable_sort(ioput.begin(), ioput.end(), compare);

    for (int i = 0; i < N; i++)
        cout << ioput[i].first << " " << ioput[i].second << "\n";
}