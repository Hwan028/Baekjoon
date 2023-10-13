#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int age, weight;
    string name;
    while (1)
    {
        cin >> name >> age >> weight;
        if (name == "#" && age == 0 && weight == 0)
        {
            break;
        }
        else
        {
            if (age > 17 || weight >= 80)
                cout << name << " Senior\n";
            else
                cout << name << " Junior\n";
        }
    }
}