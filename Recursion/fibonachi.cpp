#include<iostream>
using namespace std;

int fibonachi(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonachi(n-1)+fibonachi(n-2);
    }
}

int main(){
    int num;
    cout<<"Enter a number to find Fibonacci series upto that number : ";
    cin>>num;
    cout<<"Fibonacci series upto "<<num<<" is : "<<endl;
    for(int i=0;i<num;i++){
        cout<<fibonachi(i)<<" ,";
    }

    return 0;
}