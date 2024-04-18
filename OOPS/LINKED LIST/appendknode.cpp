#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
}

void insertAtHead(node* &head, int val){
    node* n = new node(val);

    n->next = head;
    head = n;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int length(node* &head){
    node* temp = head;
    int length = 0;
    while(temp != NULL){
        temp = temp->next;
        length++;
    }
    return length;
}

node* kappend(node* &head, int k){
    node* newhead;
    node* newtail;
    node* tail = head;

    int l = length(head);
    int count = 1;
    k = k%l;        //for edge case(if k is bigger than length of linked list)
    while(tail->next != NULL){
        if(count == l-k){
            newtail = tail;
        }
        if(count == l-k+1){
            newhead = tail;
        }
        tail = tail->next;
        count++;
    }

    newtail->next = NULL;
    tail->next = head;

    return newhead;
}

int main(){
    node* head = NULL;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0; i<6; i++){
        insertAtTail(head,arr[i]);
    }
    display(head);
    node* newhead = kappend(head, 3);
    display(newhead);
    return 0;
}