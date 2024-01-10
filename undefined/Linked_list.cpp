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

void InsertAtTail(node* head, int val){

    node* n = new node(val);
    //check if no element present in our data(head is null)
    if (head == NULL){
        head = n;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    
    node* head = NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,4);
    InsertAtTail(head,2);
    display(head);
    return 0;
}