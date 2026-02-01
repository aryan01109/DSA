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

    void push_front(int val){
        Node* newNode = new Node(val);

        // empty list
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        // empty list
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }    
    }

    void push_mid(int val ,int pos){
        Node* newNode = new Node(val);


        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            if(head == NULL){
            cout<<"position is invalid!!\n";
            return;
            }
            temp=temp->next;
        }

        newNode->next=temp->next;
        temp->next=newNode;  
    }    

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){

    List li;   

    li.push_front(3);
    li.push_front(2);
    li.push_front(5);

    li.push_back(6);

    li.push_mid(8,2);

    li.print();

    return 0;
}
