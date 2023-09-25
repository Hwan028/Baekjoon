#include <iostream>
using namespace std;


int main() {
  cin.tie(NULL);
  cout.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  string str;
	cin >> str;

	for (char i = 'a'; i <= 'z'; i++) {
		cout << (int)str.find(i) << ' ';  
    //find 함수는 해당값을 찾아서 인덱스를 반환하고 해당되는게 없다면 쓰레기값을 출력한다. 하지만 정수형으로 바꿔줄 시 쓰레기 값이 아닌 -1을 반환한다.
	}
	return 0;
}