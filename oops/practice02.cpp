#include<iostream>
#include<string>
using namespace std;

class student{
    public :
            string name;
            int num;

    student(string name, int num){
        this->name=name;
        this->num=num;
    }        

    student(student &original){
        cout<<"coping original to new...."<<endl;
        name=original.name;
        num=original.num;
    }

};

int main(){

    student s1("priyanshi", 26);

    student s2(s1);

    cout<<"student name is :"<<s2.name<<endl;
    cout<<"student roll num is : "<<s2.num<<endl;
    return 0;

}