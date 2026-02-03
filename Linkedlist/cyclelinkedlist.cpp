#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }

    // ---------- INSERT Front ----------
    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    // ---------- INSERT Back ----------
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // ---------- INSERT Mid ----------
    void push_mid(int val ,int pos){

        if(pos == 0){
            push_front(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;

        for(int i = 0; i < pos-1; i++){
            if(temp == NULL){
                cout << "Position is invalid!!\n";
                delete newNode;
                return;
            }
            temp = temp->next;
        }

        if(temp == NULL){
            cout << "Position is invalid!!\n";
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;

        if(newNode->next == NULL)
            tail = newNode;
    }

    // ---------- PRINT ----------
    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // ---------- CREATE CYCLE (for testing) ----------
    void makeCycle(){
        if(tail != NULL)
            tail->next = head;
    }

    // ---------- DETECT CYCLE ----------
    bool cycle(){
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                cout << "Cycle exists!!\n";
                return true;
            }
        }

        cout << "Cycle doesn't exist!!\n";
        return false;
    }

void remove_cycle(){
    Node* slow = head;
    Node* fast = head;
    bool isCycle = false;

    // Detect cycle
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            cout << "Cycle exists!!\n";
            isCycle = true;
            break;
        }
    }

    if(!isCycle){
        cout << "Cycle doesn't exist!!\n";
        return;
    }

    //  Move slow to head
    slow = head;

    // Cycle starts at head
    if(slow == fast){
        while(fast->next != slow){
            fast = fast->next;
        }
        fast->next = NULL;
    }
    // Cycle starts in middle
    else{
        Node* prev = NULL;
        while(slow != fast){
            prev = fast;
            slow = slow->next;
            fast = fast->next;
        }
        prev->next = NULL;
    }
}

};

int main(){

    List li;

    li.push_front(2);
    li.push_front(5);
    li.push_back(8);
    li.push_back(11);
    li.push_mid(13,2);
    li.push_mid(15,3);

    li.print();   // 5->2->13->15->8->11->NULL

    li.makeCycle();   // manually create loop

    li.remove_cycle();

    // li.cycle();       // detect loop

    return 0;
}
