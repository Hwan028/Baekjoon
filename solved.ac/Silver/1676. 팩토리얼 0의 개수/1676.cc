#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int num, t1, t2, t3;
    cin >> num;
    t1 = num / 5;
    t2 = num / 25;
    t3 = num / 125;

    cout << t1 + t2 + t3;
}