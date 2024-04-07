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
    node* temp = head;
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;

}

void display(node* head){
    node* temp = head;
    if(head == NULL){
        return;
    }

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

//by using iterators
node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr; //new head

}

//recursive way
node* reverseRec(node* &head){

    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }

    node* newhead = reverseRec(head->next);
    head->next->next = head;        //if head = 1; 1->2<-3<-4(newhead)  i.e. head->next->next = 1(head)?
    head->next = NULL;              // NULL<-1<-2<-3<-4(newhead)

    return newhead;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    cout << endl;

    node* revhead = reverse(head);
    display(revhead);
    cout << endl;

    node* rechead = reverseRec(revhead);
    display(rechead);
    return 0;
}