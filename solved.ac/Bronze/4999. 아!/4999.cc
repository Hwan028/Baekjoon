#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    string s1, s2;
    cin >> s1 >> s2;
    if(s1.length() < s2.length())
        cout << "no";
    else
        cout << "go";
}