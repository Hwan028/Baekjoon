#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    char arr[100]={0,};
    cin >> arr;
    for(int i=0; i<100; i++)
      {
        if((int)arr[i]>=65&&arr[i]<=90)
        {
          arr[i] = (char)(arr[i]+32);
        }
        else if(arr[i]>=97&&arr[i]<=122)
        {
          arr[i] = (char)(arr[i]-32);
        }
      }
  cout << arr;

  return 0;
}