#include <iostream>
#include <vector>
using namespace std;

int search(const vector<int>& arr, int start, int end, int num) {

    // Base case
    if (start > end)
        return -1;

    int mid = start + (end - start) / 2;

    if (arr[mid] == num)
        return mid;

    // Left sorted
    if (arr[start] <= arr[mid]) {
        if (arr[start] <= num && num < arr[mid])
            return search(arr, start, mid - 1, num);
        else
            return search(arr, mid + 1, end, num);
    }
    // Rightsorted
    else {
        if (arr[mid] < num && num <= arr[end])
            return search(arr, mid + 1, end, num);
        else
            return search(arr, start, mid - 1, num);
    }
}

int main() {

    vector<int> arr = {4,5,6,7,0,1,2,3};

    cout << search(arr, 0, 7, 0);

    return 0;
}
