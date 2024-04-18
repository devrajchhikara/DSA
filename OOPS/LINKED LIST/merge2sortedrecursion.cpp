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

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;

}

node* mergeRecursion(node* &head1, node* &head2){
    node* result;

    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }

    if(head1->data < head2->data){
        result = head1;
        result->next = mergeRecursion(head1->next, head2);
    }
    else{
        result = head2;
        result->next = mergeRecursion(head1, head2->next);
    }

    return result;
}

int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    int arr1[] = {1,4,5,7}, arr2[] = {2,3,6};
    for(int i=0; i<4; i++){
        insertAtTail(head1, arr1[i]);
    }
    for(int i=0; i<3; i++){
        insertAtTail(head2, arr2[i]);
    }
    display(head1);
    display(head2);

    node* newheadrec = mergeRecursion(head1, head2);
    display(newheadrec);
    return 0;
}