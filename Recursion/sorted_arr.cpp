#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){

    int arr[] = {1,2,6,4,5};
    int arr2[] = {1,2,3,4,5};
    int n = 5;
    cout<<isSorted(arr,n)<<endl;
    cout<<isSorted(arr2,n)<<endl;

    
    return 0;
}
