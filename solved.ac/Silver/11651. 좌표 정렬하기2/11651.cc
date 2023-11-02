#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.second == b.second)
    return a.first < b.first;
  return a.second < b.second;
}

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> ioput(N);
 
  for (int i = 0; i < N; i++)
    cin >> ioput[i].first >> ioput[i].second;
 
  sort(ioput.begin(), ioput.end(), compare);
 
  for (int i = 0; i < N; i++)
    cout << ioput[i].first << " " << ioput[i].second << "\n";
}