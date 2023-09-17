#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int code()
{
  ll x, sum = 0;
  for (int i = 0; i < 5; i++)
  {
    cin >> x;
    sum += pow(x, 2);
  }
  return sum % 10;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cout << code();

  return 0;
}