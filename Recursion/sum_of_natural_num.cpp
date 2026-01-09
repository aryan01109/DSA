#include<iostream>
using namespace std;

int sum_of_natural_num(int n){
    if(n==0){
        return 0;
    }
    return n + sum_of_natural_num(n-1);
}

int main(){
    int num;
    cout<<"Enter a number to find sum of natural numbers : ";
    cin>>num;
    cout<<"Sum of natural numbers upto "<<num<<" is : "<<sum_of_natural_num(num)<<endl;
    return 0;
}