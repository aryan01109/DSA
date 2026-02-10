// #include<iostream>
// #include<list>
// #include<vector>
// #include<string>
// using namespace std;

// template <class T>
// class Node{
//     public:
//     T data;
//     Node* next;

//     Node(T val){
//         data=val;
//         next=NULL;
//     }
// };

// template <class T>
// //create stack using linklist
// class Stack{
//     list<T>ll;

// public:

//     bool isEmpty(){
//         return ll.empty();
//     }
//     void push(T val){
//         ll.push_back(val);
//         Node<T>* newNode = new Node<T>(val);
//         if(head=NULL){
//             head = newNode;
//         } else {
//             Node<T>* temp = head;
//             while(temp->next != NULL){
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//         }
//     }
//     void pop(){
//         if(isEmpty()){
//             cout<<"Stack is empty"<<endl;
//             return;
//         }
//         ll.pop_back();
//     }

//     T top(){
//         if(isEmpty()){
//             cout<<"Stack is empty"<<endl;
//             return T(); 
//             // Return default value 
//         }
//         return ll.back();
//     }
// };      

// int main(){
//     return 0;
// }

#include<iostream>
#include<list>
using namespace std;

template <class T>
class Stack {
    list<T> ll;

public:
    bool isEmpty() {
        return ll.empty();
    }

    int size() {
        return ll.size();
    }

    void push(T val) {
        ll.push_back(val);
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        ll.pop_back();
    }

    T top() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return T();
        }
        return ll.back();
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack elements: ";
        for (auto it = ll.begin(); it != ll.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack<char> s;

    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');

    s.display();

    cout << "Top: " << s.top() << endl;

    s.pop();

    cout << "After pop, top: " << s.top() << endl;

    cout << "Size: " << s.size() << endl;

    return 0;
}
