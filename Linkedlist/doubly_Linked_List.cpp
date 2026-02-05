#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }

    //--------insert front---------
    void push_front(int val){

        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    //-------- insert back---------
    void push_back(int val){

        if(head == NULL){
            push_front(val);
            return;
        }

        Node* newNode = new Node(val);

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    //-------- insert at pos (1-based) --------
    void push_pos(int val,int pos){

        if(pos <= 0){
            cout << "invalid position !!!\n";
            return;
        }

        if(pos == 1){
            push_front(val);
            return;
        }

        Node* temp = head;

        for(int i = 1; i < pos-1; i++){
            if(temp == NULL){
                cout << "invalid position !!!\n";
                return;
            }
            temp = temp->next;
        }

        if(temp == NULL){
            cout << "invalid position !!!\n";
            return;
        }

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        newNode->prev = temp;

        if(temp->next != NULL)
            temp->next->prev = newNode;
        else
            tail = newNode;

        temp->next = newNode;
    }
    void print(){
        Node* temp=head;
        while(temp->next !=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

    }
};

int main(){
    List li;

    li.push_front(2);
    li.push_front(5);
    li.push_back(8);
    li.push_back(7);
    li.push_pos(3,2);
    li.push_pos(6,4);


    li.print();


    return 0;
}
    