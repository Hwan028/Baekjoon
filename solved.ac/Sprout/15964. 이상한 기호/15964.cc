#include <iostream>
using namespace std;
typedef long long ll;

ll cal (ll a, ll b)
{
  ll num=0;
  num = (a+b)*(a-b);
  return num;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll a,b;
  cin >> a >> b;
	cout << cal(a,b);

	return 0;
}