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
    //new node
    node* n = new node(val);

    //when no elements in linked list
    if(head == NULL){
        head = n;
        return;
    }
    //normal condition

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

bool search(node* head, int key){
    node* temp = head;

    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void Delete(node* &head, int val){
    node* temp = head;

    if(head == NULL){
        return;
    }
    if(temp->data == val){
        node* todelete = head;
        head = head->next;

        delete todelete;
        return;
    }
    if(head->next == NULL){
        node* todelete = head;
        head = NULL;
        delete todelete;
        return;
    }

    while(temp->next->data != val){
        temp = temp->next;
    }
    
    node* todelete = temp->next;

    temp->next = temp->next->next;
    
    delete todelete;
}

int main(){

    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head, 4);
    insertAtHead(head,5);
    insertAtTail(head,6);
    cout << search(head,3) << endl;
    display(head);
    Delete(head, 2);
    display(head);
    return 0;
}