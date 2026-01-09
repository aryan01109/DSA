#include<iostream>
using namespace std;

//    POLYMORPHISM

//function overloading
class print {
      public:
             void show(int num){
                    cout<<"print int function called : "<<num<<endl;
             }
             void show(string str){
                    cout<<"print string function called : "<<str<<endl;
             }
};

//oprator overloading
class addition{
    public:
           int a;
           addition(int val){
                a=val;
           }

           //addition operator overloading
           //addition operator + (addition &obj){
           void operator + (addition &obj){
                addition res(0);
                res.a=this->a + obj.a;
                cout<<"result of addition is : "<<res.a<<endl;
                // return res;
           }
   
};

//virtual function
class base{
    public:
           virtual void show(){
                cout<<"base class show function called"<<endl;
           }
};

class derived : public base{
    public:
           void show(){
                cout<<"derived class show function called"<<endl;
           }
};

//abstraction
class shape{
    public:
           virtual void area()=0; //pure virtual function

};
class rectangle : public shape{
    public:
            void area(){
                 cout<<"area of rectangle"<<endl;
              }
};

class circle : public shape{
    public:
            void area(){
                 cout<<"area of circle"<<endl;
              }
};

int main(){

    cout<<"------ FUNCTION OVERLOADING ------"<<endl;
    print p;
    p.show(5);  
    p.show("hello");

    cout<<"\n------ OPERATOR OVERLOADING ------"<<endl;
    addition obj1(10);
    addition obj2(20);
    obj1 + obj2;  //operator overloading

    cout<<"\n------ VIRTUAL FUNCTION ------"<<endl;
    base *b;
    derived d;
    b=&d;
    b->show();  //virtual function


    cout<<"\n------ ABSTRACTION ------"<<endl;
    shape *s1;  
    rectangle r;
    circle c;
    s1=&c;
    s1->area();  //area of circle
    s1=&r;
    s1->area();  //area of rectangle
    return 0;
}