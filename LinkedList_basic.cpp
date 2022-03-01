#include<bits/stdc++.h>
using namespace std;

/// Structure of a link list
struct Node{
int data;
Node *link;
};

Node *head = NULL; ///Global

/// Creation of a link list
int main()
{
    Node *ptr = new Node();
    ptr->data =2;
    ptr->link = NULL;
    head = ptr;
    return 0;
}

///Insert a node at the beginning of a link list
void insertBeg(int d){
    Node *ptr = new Node();
    ptr->data = d;
    ptr->link =head;
    head =ptr;
}

///Insert a node at the end of a link list
void insertEnd(int d){
   Node *ptr = new Node();
   ptr->data = d;
   ptr->link = NULL;
   if(head==NULL){
    head = ptr;
   }
   else {
      Node *temp = head;
      while(temp->link!=NULL){
        temp = temp->link; /// Traversing the list.
      }
      temp->link = ptr;
   }
}

///Delete a first node from a link list
void deleteBeg(){
    if(head == NULL)
        cout<<"List is Empty";
    else{
        Node *ptr =head;
        head = head->link;
        free(ptr);
    }

}

