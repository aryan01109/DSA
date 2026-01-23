#include<iostream>
using namespace std;

int x_to_the_power_n(int x,int n){

    //recursion method
    // if(n==0){
    //     return 1;
    // }

    // return x * x_to_the_power_n(x,n-1);


    //odd_even poewer method
    if(n==0){
        return 1;
    }
    int odd;
    int even;
    if(n%2==0){
        even = x_to_the_power_n(x,n/2);
        return even*even;
    }
    else{
        odd = x_to_the_power_n(x,n/2);
        return odd*odd*x;
    }
}

int main(){

    int x,n;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<x<<" to the power "<<n<<" is : "<<x_to_the_power_n(x,n)<<endl;


    return 0;
}