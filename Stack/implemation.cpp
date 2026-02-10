#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
    vector<T> vec;

public:
    void push(T val) {
        vec.push_back(val);
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        vec.pop_back();
    }

    void top() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << vec.back() << endl;
    }

    bool isEmpty() {
        return vec.empty();
    }
};

int main() {
    Stack<char> s;

    s.push('a');
    s.push('b');
    s.push('c');

    s.top();   // c
    s.pop();
    s.top();   // b

    cout << "\nStack elements are:\n";
    while (!s.isEmpty()) {
        s.top();
        s.pop();
    }

    return 0;
}
