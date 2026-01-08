#include<iostream>
using namespace std;


//    1. SINGLE INHERITANCE


class Person {
public:
    void name() {
        cout << "My name is : AB" << endl;
    }
};

class Student : public Person {
public:
    void roll() {
        cout << "My roll number is : 101" << endl;
    }
};



//    2. MULTI-LEVEL INHERITANCE


class Principal {
public:
    void school() {
        cout << "School name is : B.L. Patel School" << endl;
    }
};

class Teacher : public Principal {
public:
    void className() {
        cout << "Class is : 12th Science" << endl;
    }
};

class Std : public Teacher {
public:
    void stdRoll() {
        cout << "Student Roll No : 101" << endl;
    }
};


//3. MULTIPLE INHERITANCE

class Manager {
public:
    void teamwork() {
        cout << "Manager handles team work" << endl;
    }
};

class Developer {
public:
    void coding() {
        cout << "Developer writes project code" << endl;
    }
};

class CEO : public Manager, public Developer {
public:
    void performance() {
        cout << "CEO checks company performance" << endl;
    }
};



int main() {

    cout << "------ SINGLE INHERITANCE ------" << endl;
    Student s;
    s.name();
    s.roll();

    cout << "\n------ MULTI-LEVEL INHERITANCE ------" << endl;
    Std st;
    st.school();
    st.className();
    st.stdRoll();

    cout << "\n------ MULTIPLE INHERITANCE ------" << endl;
    CEO c;
    c.teamwork();
    c.coding();
    c.performance();

    return 0;
}
