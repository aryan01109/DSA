#include<iostream>
using namespace std;

// perform a two comm.....
void update_bit(int num){
    int n=num;
    cout<<"1`s compliment is : "<<(~n)<<endl;
    cout<<"2`s compliment is : "<<((~n)+1)<<endl;
    cout<<"after perform a left shift operatin : "<<(num<<2)<<endl;
    cout<<"after perform a right shift operations : "<<(num>>1)<<endl;

    //odd or even num
    if((num&1)==1){
        cout<<"number is odd!!"<<endl;
    
    }else{
        cout<<"number is even!!"<<endl;
    }

    // set the ith postion 
    int bitmask=1<<1;
    cout<<bitmask<<endl;
    cout<<(num | bitmask)<<endl;

    //clear the ith positions
    int bitmask1=(~(1<<1));
    cout<<bitmask1<<endl;
    cout<<(num & bitmask1)<<endl;

    // CHECK THE NUMBER IS POWER IS 2 OR NOT 
    if((num & (num -1))==0){
        cout<<"numbers is power of 2 !!"<<endl;

    }else{
        cout<<"number is not power of 2 !!"<<endl;
    }
   
}
void set_bit(int n){
    int bitmask1=1<<2;
    // cout<<bitmask1<<endl;
    cout<<(n & bitmask1)<<endl;

    int bitmask2=1<<3;
    // cout<<bitmask2<<endl;
    cout<<(n | bitmask2)<<endl;
}
int main(){
    cout<<(~6)<<endl;
    cout<<(~0)<<endl;

    update_bit(6);
    set_bit(7);



    return 0;
}