#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int start, int end) {
    int pivot = arr[end];   
    int i = start - 1;

    for (int j = start; j < end; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[end]);

    return i;
}

void quick_sort(vector<int> &arr, int start, int end) {

    if (start >= end) return;   

    int pivotid = partition(arr, start, end);

    quick_sort(arr, start, pivotid - 1);  // left
    quick_sort(arr, pivotid + 1, end);    // right
}

int main() {
    vector<int> arr = {7,6,5,4,3,2,1};

    quick_sort(arr, 0, 6);

    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ,";
    }
    return 0;
}
