#include <iostream>
using namespace std;

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(0);

  int T, k, n;
  cin >> T;
  for(int t=0; t<T; t++)
    {
      cin >> k >> n;
      int a[15][15] = {0,};
      for(int i=1; i<=n; i++)
        a[0][i] = i;
      for(int i=1; i<=k; i++) {
        for(int j=1; j<=n; j++) {
          for(int l=1; l<=j; l++) {
            a[i][j] += a[i-1][l];
          }
        }
      }
      cout << a[k][n] << "\n";
    }
}