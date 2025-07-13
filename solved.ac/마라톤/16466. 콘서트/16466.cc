#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N;
    cin >> N;
    vector<int> v(N);
    for(int i=0; i<N; i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    int ans = 1;
    for(int i=0; i<N; i++) {
        if(ans != v[i])
            break;
        for(int j=i+1; j<N; j++) {
            if(v[i] == v[j])
                i = j;
            else
                break;
        }
        ans++;
    }
    cout << ans << "\n";
}