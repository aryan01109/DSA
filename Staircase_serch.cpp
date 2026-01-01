#include <iostream>
using namespace std;

int main(){
    int n = 4, m = 4;
    int key = 29;

    int arr[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int row = 0, col = m - 1;

    while(row < n && col >= 0){
        if(arr[row][col] == key){
            cout << "Found " << key << " at (" << row << "," << col << ")";
            return 0;  
        }
        else if(arr[row][col] < key){
            row++;
        }
        else{
            col--;
        }
    }

    cout << "Not Found";
    return 0;
}
