#include<iostream>
using namespace std;

void range_clear(int n,int i,int j){
    int a=((~0)<<(j+1));
    int b=(1<<i)-1;

    cout<<a<<endl;
    cout<<b<<endl;

    int bit_mask=(a|b);
    n=(n & bit_mask);

    cout<<n<<endl;


}

int main(){

    range_clear(15,1,3);

    return 0;
}