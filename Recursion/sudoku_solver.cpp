#include<iostream>
using namespace std;

void printsudoku(int sudoku[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<sudoku[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool issafe(int sudoku[9][9],int row,int col,int digit){

    // column
    for(int i=0;i<9;i++){
        if(sudoku[i][col]==digit)
            return false;
    }

    // row
    for(int j=0;j<9;j++){
        if(sudoku[row][j]==digit)
            return false;
    }

    // 3x3 grid
    int start_r = (row/3)*3;
    int start_c = (col/3)*3;

    for(int i=start_r;i<start_r+3;i++){
        for(int j=start_c;j<start_c+3;j++){
            if(sudoku[i][j]==digit)
                return false;
        }
    }

    return true;
}

bool sudokuSolver(int sudoku[9][9],int row,int col){

    if(row==9){
        return true;
    }

    int nextRow = row;
    int nextCol = col+1;

    if(nextCol==9){
        nextRow = row+1;
        nextCol = 0;
    }

    // already filled
    if(sudoku[row][col] != 0){
        return sudokuSolver(sudoku,nextRow,nextCol);
    }

    for(int digit=1;digit<=9;digit++){

        if(issafe(sudoku,row,col,digit)){

            sudoku[row][col] = digit;

            if(sudokuSolver(sudoku,nextRow,nextCol))
                return true;

            sudoku[row][col] = 0;   
        }
    }

    return false;
}

int main(){

    int sudoku[9][9] = {

        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    if(sudokuSolver(sudoku,0,0)){
        cout<<"Solved Sudoku:\n";
        printsudoku(sudoku);
    } else {
        cout<<"No solution exists";
    }

    return 0;
}
