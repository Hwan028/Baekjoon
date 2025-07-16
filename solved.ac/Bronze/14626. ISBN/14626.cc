#include <iostream>
using namespace std;

int ISBN(int sum, int tmp) {
    int ans=0;
    for(int i=0; i<10; i++) {
        if((sum+i*tmp)%10==0) {
            ans = i;
            break;
        }
    }
    return ans;
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    int tmp,sum=0;
    string str;
    cin >> str;
    
    for(int i=0; i<str.length(); i++) {
        if(str[i]=='*') {
            if(i%2==0)
                tmp = 1;
            else 
                tmp = 3;
        } else {
            if(i%2==0)
                sum += str[i]-'0';
            else
                sum += 3 * (str[i]-'0');          
        }
    }
    cout << ISBN(sum,tmp) << "\n";   
}