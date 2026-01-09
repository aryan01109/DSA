#include<iostream>
using namespace std;

int dec_oder(int n){
    if(n<=0){
        return 0;
    }
    cout<<n<<endl;
    return dec_oder(n-1);
}

int main (){
    int num;
    cout<<"Enter a number to print decreasing odd numbers : ";
    cin>>num;
    dec_oder(num);
    return 0;
}