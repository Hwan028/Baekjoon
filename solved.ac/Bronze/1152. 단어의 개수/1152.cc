#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int word = 0;
    string str;
    getline(cin, str);
    for (string::size_type i = 0; i < str.length(); i++)
    {
        if (str[i] == 32)
            word++;
    }

    if (str[0] == 32)
        word--;
    if (str[str.length() - 1] == 32)
        word--;

    if (str.empty())
        cout << 0;
    else
        cout << word + 1;
    return 0;
}