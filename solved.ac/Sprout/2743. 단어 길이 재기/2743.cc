#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    char word[101];
    cin >> word;

    int length = 0;
    while (word[length] != '\0')
    {
        length++;
    }

    cout << length;

    return 0;
}