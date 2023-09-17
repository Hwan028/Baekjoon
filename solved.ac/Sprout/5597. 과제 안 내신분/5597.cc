#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num,arr[30]={0,};
  for(int i=0; i<30; i++)
    {
      arr[i] = i+1;
    }
  for(int i=0; i<28; i++)
    {
      cin >> num;
      for(int j=0; j<30; j++)
        {
          if(num == arr[j])
          {
            arr[j] =0;
          }
        }
    }
  for(int i=0; i<30; i++)
    {
      if(arr[i] != 0)
      {
        cout << arr[i] << "\n";
      }
    }
    
    return 0;
}