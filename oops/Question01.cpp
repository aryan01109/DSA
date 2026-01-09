#include<iostream>
using namespace std;

class subtraction{
    public:
           int a;
           subtraction(int val){
                a=val;
           }

           //subtraction operator overloading
           //subtraction operator - (subtraction &obj){
           void operator - (subtraction &obj){
                subtraction res(0);
                res.a=this->a - obj.a;
                cout<<"result of subtraction is : "<<res.a<<endl;
                // return res;
           }
};

int main(){
    subtraction obj1(10);
    subtraction obj2(4);
    obj1 - obj2;


    return 0;
}