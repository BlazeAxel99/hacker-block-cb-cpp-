/*


Given a head to Linked List L, write a function to reverse the list taking k elements at a time. Assume k is a factor of the size of List.

You need not have to create a new list. Just reverse the old one using head.
Input Format

The first line contains 2 space separated integers N and K

The next line contains N space separated integral elements of the list.
Constraints

0 <= N <= 10^6 0 <= K <= 10^6
Output Format

Display the linkedlist after reversing every k elements
Sample Input

9 3
9 4 1 7 8 3 2 6 5

Sample Output

1 4 9 3 8 7 5 6 2

Explanation

N = 9 & K = 3

Original LL is : 9 -> 4 -> 1 -> 7 -> 8 -> 3 -> 2 -> 6 -> 5

After k Reverse : 1 -> 4 -> 9 -> 3 -> 8 -> 7 -> 5 -> 6 -> 2

*/

#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    //Constructor 
    node(int d){
        data = d;
        next = NULL;
    }
};
void insertAtTail(node*&head,int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node *tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
}
int buildList(node*&head){
    int n;
    cin>>n;
    int k;
    cin>>k;
    while(n--){
        int data;
        cin>>data;
        insertAtTail(head,data);
    }
    return k;
}
node* reverse(node*&head,int k) 
{ 
    int x=k;
    node *current = head; 
    node *prev = NULL, *nex = NULL; 
    while (current != NULL && x>0) 
    { 
        nex = current->next; 
        current->next = prev; 
        prev = current; 
        current = nex;
        x--;
        //cout<<nex->data<<" "<<endl;
    } 
    if(nex != NULL){
        head->next = reverse(nex,k);
    }
    return prev;
} 
void printList(node*head){
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    printList(head->next);
}
int main() {
    node* head = NULL;
    int k = buildList(head);
   // printList(head);
    //cout<<endl;
    head=reverse(head,k);
    printList(head);
}
