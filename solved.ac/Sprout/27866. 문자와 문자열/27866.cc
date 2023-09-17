#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num;
    char s[1001] = {
        0,
    };
    cin >> s;
    cin >> num;
    for (int i = 0; s[i] != '\0'; i++)
        if (num == i + 1)
        {
            cout << s[i];
        }
    return 0;
}