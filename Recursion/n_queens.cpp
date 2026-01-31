#include<iostream>
#include<vector>
using namespace std;

int totalSolutions = 0;

void print_board(vector<vector<char>> &board, int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << "<--------------------------->\n";
}

bool isSafe(vector<vector<char>> &board,int row, int col){
    int n = board.size();

    // column
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }

    // left diagonal
    for(int i=row-1, j=col-1;i>=0 && j>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    // right diagonal
    for(int i=row-1, j=col+1;i>=0 && j<n;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    return true;
}

void implement_queens(vector<vector<char>> &board, int row, int n){

    if(row == n){
        totalSolutions++;
        print_board(board, n);
        return;
    }

    for(int j = 0; j < n; j++){

        if(isSafe(board, row, j)){

            board[row][j] = 'Q';

            implement_queens(board, row + 1, n);

            board[row][j] = '.';
        }
    }
}

int main(){

    int n = 8;

    vector<vector<char>> board(n, vector<char>(n, '.'));

    implement_queens(board, 0, n);

    cout << "\nTotal solutions = " << totalSolutions << endl;

    return 0;
}
