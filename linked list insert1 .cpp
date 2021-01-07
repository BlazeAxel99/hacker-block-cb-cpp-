#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node*next;

    node(int d){
        data = d;
        next =NULL;
    }
};


void insertAthead( node*&head,int d){
      if (head==NULL){
          head = new node(d);
          return;
      }
      node *n = new node(d);
      n->next=head;
      head=n;
}

void print(node*head){
    while(head!=NULL){
    cout<<head->data<<"->";
    head=head->next;
    }
}



int main() {
   node*head = NULL;
    insertAthead(head,3);
    insertAthead(head,2);
    insertAthead(head,1);
    insertAthead(head,0);
    print(head);
    print(head);
}
