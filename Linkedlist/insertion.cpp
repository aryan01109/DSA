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

    ~Node(){
        cout << "~node " << data << endl;
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

    ~List(){
        cout << "~list\n";
        while(head != NULL){
            pop_front();
        }
    }

    // ---------- INSERT ----------

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

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

    // ---------- DELETE ----------

    void pop_front(){
        if(head == NULL){
            cout << "list is empty!!\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;

        if(head == NULL)
            tail = NULL;
    }

    void pop_back(){
        if(head == NULL){
            cout << "list is empty!!\n";
            return;
        }

        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;

        while(temp->next != tail){
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    // ---------- SEARCH ----------

    void search_key(int key){

        Node* temp = head;
        int i = 0;

        while(temp != NULL){
            if(key == temp->data){
                cout << key << " found at position: " << i << endl;
                return;
            }
            temp = temp->next;
            i++;
        }

        cout << key << " not found\n";
    }

    int helper(Node* hp, int key){

        if(hp == NULL)
            return -1;

        if(hp->data == key)
            return 0;

        int ind = helper(hp->next, key);

        if(ind == -1)
            return -1;

        return ind + 1;
    }

    int search_recur(int key){
        return helper(head, key);
    }

    // ---------- REVERSE LIST ----------

    void reverse(){

        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        tail = head;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
    }

    // ---------- SIZE ----------

    int size(){
        int count = 0;
        Node* temp = head;

        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        return count;
    }

    // ---------- REMOVE Nth NODE ----------

    void removeNth(int n){

        if(head == NULL){
            cout << "List is empty\n";
            return;
        }

        if(n == 0){
            pop_front();
            return;
        }

        int sz = size();

        if(n >= sz || n < 0){
            cout << "Invalid position\n";
            return;
        }

        Node* prev = head;

        for(int i = 0; i < n-1; i++){
            prev = prev->next;
        }

        Node* del = prev->next;

        prev->next = del->next;

        if(del == tail)
            tail = prev;

        delete del;
    }

    // ---------- MERGE SORT HELPERS ----------

    Node* SpliteAtMid(Node* head){

        if(head == NULL || head->next == NULL)
            return NULL;

        Node* slow = head;
        Node* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        Node* rightHead = slow->next;
        slow->next = NULL;

        return rightHead;
    }

    Node* merge(Node* left, Node* right){

        if(!left) return right;
        if(!right) return left;

        Node* result = NULL;

        if(left->data <= right->data){
            result = left;
            result->next = merge(left->next, right);
        }
        else{
            result = right;
            result->next = merge(left, right->next);
        }

        return result;
    }

    Node* Merge_sort(Node* head){

        if(head == NULL || head->next == NULL)
            return head;

        Node* rightHead = SpliteAtMid(head);

        Node* left = Merge_sort(head);
        Node* right = Merge_sort(rightHead);

        return merge(left, right);
    }

    void sort(){

        head = Merge_sort(head);

        Node* temp = head;
        while(temp && temp->next)
            temp = temp->next;

        tail = temp;
    }
};

// ---------- MAIN ----------

int main(){

    List li;

    li.push_front(3);
    li.push_front(2);
    li.push_front(5);

    li.push_back(6);
    li.push_mid(8,2);

    li.print();

    li.reverse();
    li.print();

    li.removeNth(2);
    li.print();

    li.pop_front();
    li.print();

    li.pop_back();
    li.print();

    cout << "Recursive search index: "
         << li.search_recur(8) << endl;

    li.search_key(8);

    // ---- SORT ----
    li.sort();
    cout << "After sorting:\n";
    li.print();

    return 0;
}
