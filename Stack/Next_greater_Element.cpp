#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void nextelement(vector<int> arr, vector<int>& result){

    stack<int> s;
    int ind = arr.size() - 1;

    result[ind] = -1;
    s.push(arr[ind]);

    
    for(ind = ind - 1; ind >= 0; ind--){

        int current = arr[ind];

        while(!s.empty() && current >= s.top()){
            s.pop();
        }

        if(s.empty()){
            result[ind] = -1;
        }
        else{
            result[ind] = s.top();
        }

        s.push(current);
    }
}

int main(){

    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> result(arr.size(), 0);

    nextelement(arr, result);

    
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}
