#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
	
  int x,t=0,max=0;
  for(int i=1; i<=9; i++)
  {
    cin >> x;
    if(max < x)
    {
      max = x;
      t = i;
    }
  }
  cout << max <<"\n" << t;
}