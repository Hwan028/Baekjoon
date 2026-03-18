#include <iostream>
#include <vector>
using namespace std;
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isIn(vector<int> S, int args) {
    return S[args-1] == args;
}

int main() {
    FastIO;

    vector<int> S(20);
    int T;
    cin >> T;

    for(int i=0; i<T; i++) {
        int args = 0;
        string S_func;
        cin >> S_func;
        
        if(S_func == "all") {
            for(size_t j=1; j<=S.size(); j++) {
                S[j-1] = j;
            }
            continue;
        } else if(S_func == "empty") {
            fill(S.begin(), S.end(), 0);
            continue;
        }
        
        cin >> args;

        if(S_func == "add") {
            if(isIn(S, args)) continue;
                else S[args-1] = args;
        } else if(S_func == "remove") {
            if(isIn(S, args)) S[args-1] = 0;
                else continue;
        } else if(S_func == "check") {
            if(isIn(S, args)) cout << 1 << "\n";
                else cout << 0 << "\n";
        } else if(S_func == "toggle") {
            if(isIn(S, args)) S[args-1] = 0;
                else S[args-1] = args;
        }
    }
}