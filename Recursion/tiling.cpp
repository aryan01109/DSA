#include<iostream>
using namespace std;

int tilingways(int n){
    //base case
    if(n==0 || n==1){
        return 1;
    }

    //vertical choice
    int vertical=tilingways(n-1);
    //horizontal choice
    int horizontal=tilingways(n-2);

    return vertical + horizontal;
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<tilingways(n)<<endl;
    return 0;
}