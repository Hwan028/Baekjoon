#include <iostream>
#include <vector>
using namespace std;

int countChange(const vector<vector<char>>& board, int row, int col) {
    int countB=0,countW=0;
    for(int i=row; i<row+8; i++) {
        for(int j=col; j<col+8; j++) {
            char firstB = (i+j)%2==0 ? 'B' : 'W';
            char firstW = (i+j)%2==0 ? 'W' : 'B';
            if(board[i][j]==firstB) countB++;
            if(board[i][j]==firstW) countW++;
        }
    }
    return countB<countW ? countB:countW;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int x,y;
    cin >> x >> y;
    vector<vector<char>> board(x,vector<char>(y));
    
    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++) {
            cin >> board[i][j];
        }
    }
    int min=32;
    for(int i=0; i<=x-8; i++) {
        for(int j=0; j<=y-8; j++) {
            int temp = countChange(board,i,j);
            min = min<temp ? min:temp;
        }
    }

    cout << min << "\n";
    
    return 0;
}