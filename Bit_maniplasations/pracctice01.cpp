#include<iostream>
using namespace std;

// claer last i bits
void clear_bit(int n){
    int bitmask=(~0<<2);
    cout<<bitmask<<endl;
    cout<<(n & bitmask)<<endl;
}
//count set bit
void count_setbit(int n){
    int count= 0;
 

    while(n > 0){
    int last_digit=(n & 1);
    count=count + last_digit;
    n=n>>1;
    }
    cout<<count<<endl;
    

}    

// fast exponentiation
void fast_exp(int n,int x){
    int ans=1;

    while(n>0){
        int last_dig=n &1;
        if(last_dig){
            ans=ans*x;
        }
        x=x*x;
        n=n>>1;
    }
    cout<<ans<<endl;
}


int main (){

    clear_bit(15);
    count_setbit(10);
    fast_exp(4,3);

    return 0;
}
