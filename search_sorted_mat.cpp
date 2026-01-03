#include<iostream>
using namespace std;

void linear_search(int arr[][4], int n, int m){
    int key = 29;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr[i][j] == key){
    //             cout<<"Found "<<key<<" at ("<<i<<","<<j<<")";
    //             return;
    //         }
    //     }
    // }
    int row=0, col=m-1;
    while(row<n && col>=0){
        if(arr[row][col] == key){
            cout<<"Found "<<key<<" at ("<<row<<","<<col<<")";
            return;
        }
        else if(arr[row][col] < key){
            row++;
        }
        else{
            col--;
        }
    }

    cout<<"Not found";
}

void binary_search(int arr[][4], int n, int m){
    int target = 10;
    int low = 0;
    int high = (n * m) - 1;

    while(low <= high){
        int mid = (low + high) / 2;

        int row = mid / m;
        int col = mid % m;

        if(arr[row][col] == target){
            cout << "Target found at (" << row << "," << col << ")";
            return;
        }
        else if(arr[row][col] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    cout << "Target not found";
}

void sprintf_matrix(int arr[][4], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


void spiralSearch(int arr[][4], int n, int m, int key){
    int startRow = 0, endRow = n - 1;
    int startCol = 0, endCol = m - 1;

    while(startRow <= endRow && startCol <= endCol){

        // 1. Top Row
        for(int col = startCol; col <= endCol; col++){
            if(arr[startRow][col] == key){
                cout << "Found at (" << startRow << "," << col << ")";
                return ;
            }
        }
        startRow++;

        // 2. Right Column
        for(int row = startRow; row <= endRow; row++){
            if(arr[row][endCol] == key){
                cout << "Found at (" << row << "," << endCol << ")";
                return ;
            }
        }
        endCol--;

        // 3. Bottom Row
        if(startRow <= endRow){
            for(int col = endCol; col >= startCol; col--){
                if(arr[endRow][col] == key){
                    cout << "Found at (" << endRow << "," << col << ")";
                    return ;
                }
            }
            endRow--;
        }

        // 4. Left Column
        if(startCol <= endCol){
            for(int row = endRow; row >= startRow; row--){
                if(arr[row][startCol] == key){
                    cout << "Found at (" << row << "," << startCol << ")";
                    return ;
                }
            }
            startCol++;
        }
    }

    cout << "Not Found";

}
int main(){
    int mat[4][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    // linear_search(mat,4,4);
    // binary_search(mat,4,4);
    spiralSearch(mat,4,4,32);
    return 0;
}
