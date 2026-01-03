#include<iostream>
using namespace std;

int main(){
    int mat[4][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    int (*p)[4] = mat; 

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << *(*(p + i) + j) << " "; 
        }
        cout << endl;
    }

    return 0;
}