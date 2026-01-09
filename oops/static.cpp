#include<iostream>
using namespace std;

//static veriable in class
class exaplmple{
    public:
            static int count;
           exaplmple(){
                count++;
                cout<<"object number : "<<count<<endl;
           }
};

int exaplmple::count=0;

//static veriable
void func(){
    static int num=0;
    num++;
    cout<<"static num is : "<<num<<endl;
}

//ststic object 
class exm{
    public:
           exm(){
                cout<<"constructor called "<<endl;
           }
           ~exm(){
                cout<<"destructor called "<<endl;
           }
};

int main(){

    cout<<"--->static variable in function  "<<endl;
    func();
    func();
    func();
    cout<<endl;

    cout<<"---> static variable in class "<<endl;
    exaplmple obj1;
    exaplmple obj2;
    exaplmple obj3;
    cout<<endl;

    cout<<"---> static object "<<endl;
    int a=0;
    if(a==0){
        static exm obj;
        
    }
    cout<<"end of program "<<endl;

   
    

    return 0;
}