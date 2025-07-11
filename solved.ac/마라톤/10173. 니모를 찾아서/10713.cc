#include <iostream>
#include <string>
using namespace std;

string findNemo(string str) {
    for(int i=0; i<str.size()-3; i++){
        if(str[i]=='N' || str[i]=='n'){
            if(str[i+1]=='E' || str[i+1]=='e') {
                if(str[i+2]=='M' || str[i+2]=='m') {
                    if(str[i+3]=='O' || str[i+3]=='o') {
                        return "Found";
                    }
                }
            }
        }
    }
    return "Missing";
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    while(1){
        string str="";    
        getline(cin, str);
        if(str!="EOI") {
            cout << findNemo(str) << "\n";
            // transform 함수와 find함수로 더 간결하게도 가능 !
        } else {
            break;
        }
    }
}