#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    char grade[30];
    cin >> grade;
    if(strcmp(grade,"A+")==0)
    {
      cout << "4.3";
    } else if (strcmp(grade,"A0")==0)
    {
      cout << "4.0";
    } else if (strcmp(grade,"A-")==0)
    {
      cout << "3.7";
    } else if (strcmp(grade,"B+")==0)
    {
      cout << "3.3";
    } else if (strcmp(grade,"B0")==0)
    {
      cout << "3.0";
    } else if (strcmp(grade,"B-")==0)
    {
      cout << "2.7";
    } else if (strcmp(grade,"C+")==0)
    {
      cout << "2.3";
    } else if (strcmp(grade,"C0")==0)
    {
      cout << "2.0";
    } else if (strcmp(grade,"C-")==0)
    {
      cout << "1.7";
    } else if (strcmp(grade,"D+")==0)
    {
      cout << "1.3";
    } else if (strcmp(grade,"D0")==0)
    {
      cout << "1.0";
    } else if (strcmp(grade,"D-")==0)
    {
      cout << "0.7";
    } else if (strcmp(grade,"F")==0)
    {
      cout << "0.0";
    }

    return 0;
}