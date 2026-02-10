#include <iostream>
#include <stack>
#include <string>
using namespace std;

void pushAtBottom(stack<int>& s, int val) {
    if (s.empty()) {
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    pushAtBottom(s, val);
    s.push(temp);
}

string reverseString(string str) {
    stack<char> s;

    for (char ch : str) {
        s.push(ch);
    }

    string ans = "";
    while (!s.empty()) {
        ans += s.top();
        s.pop();
    }

    return ans;
}

void reverseStack(stack<int>& s) {
    if (s.empty()) {
        return;
    }

    int temp = s.top();
    s.pop();
    reverseStack(s);
    pushAtBottom(s, temp);
}

void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}

int main() {
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<< "Original Stack :\n";
    printStack(s);

    cout << s.top() << endl; 
    s.pop();                 

    pushAtBottom(s, 0);

    cout<< "After coverting to reverse :\n";
    reverseStack(s);
    printStack(s);

    cout << reverseString("Hello World") << endl;

    return 0;
}
