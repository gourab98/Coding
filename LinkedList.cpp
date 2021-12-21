#include<bits/stdc++.h>
using namespace std;

// For defining Data type:
 class node{
public:
    int data;
    node* next;
 };

// For assigning Data type:
node(int val){
    data = val;
    next = NULL;
}

void insertAtTail(node* &head, int val){

    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp-> next;
    }
    temp-> next = n;
}

void display(node* head){

    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
    }
}


int main()
{

        return 0;
}
