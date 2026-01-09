#include<iostream>
using namespace std;

class person{
    public :
            string name;
            int age;
};

class student : public person{
    public :
            int roll;

            student(string name, int age, int roll){
                this->name=name;
                this->age=age;
                this->roll=roll;
                cout<<"student name is : "<<this->name<<endl;
                cout<<"student age is : "<<this->age<<endl;
                cout<<"student roll no is : "<<this->roll<<endl;
            }
};


int main(){
    
    student s1("Alice",20,12345);


    return 0;
}