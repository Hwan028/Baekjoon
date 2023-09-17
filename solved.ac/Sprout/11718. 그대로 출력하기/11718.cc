#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;

    while (true)
    {
        getline(cin, s); // getline(입력 스트림,string 객체,구분자)
        if (s == "")
            break;
        cout << s << '\n';
    }

    return 0;
}