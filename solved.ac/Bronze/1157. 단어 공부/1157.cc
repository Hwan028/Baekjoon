#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int alphabet[26] = {0,};
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {
        int k = 0;
        for (char j = 'a'; j <= 'z'; j++)
        {
            if (input[i] == j)
                alphabet[k]++;
            k++;
        }
        k = 0;
        for (char l = 'A'; l <= 'Z'; l++)
        {
            if (input[i] == l)
                alphabet[k]++;
            k++;
        }
    }
    int max = 0, idx = 0, output = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < alphabet[i])
        {
            max = alphabet[i];
            idx = i;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (max == alphabet[i])
        {
            output++;
        }
    }
    if (output == 1)
        cout << char(idx + 65);
    else
        cout << "?";
}