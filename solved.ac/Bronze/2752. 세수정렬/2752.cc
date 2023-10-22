#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num(3);
    for(int i=0; i<num.size(); i++)
        cin >> num[i];

    for(int i=1; i<num.size(); i++)
    {
        int key = num[i], j = i-1;
        while( j >= 0 && key < num[j]) {
            num[j+1] = num[j];
            j--;
        }
        num[j+1] = key;
    }

    for(int i=0; i<num.size(); i++)
        cout << num[i] << " ";
}