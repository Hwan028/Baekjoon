#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;
    if(score<=100&&score>=0)
  {
    if(score<=100&&score>=90)
    {
      std::cout<<'A';
    }
    else if(score>=80)
    {
      std::cout<<'B';
    }
    else if(score>=70)
    {
      std::cout<<'C';
    }
    else if(score>=60)
    {
      std::cout<<'D';
    }
    else
    {
      std::cout<<'F';
    }
  }
  else
  {
    std::cout<<"다시";
  }
  return 0;
}
