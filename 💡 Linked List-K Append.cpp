/*


Given a linked list of length N and an integer K , append the last K elements of a linked list to the front. Note that K can be greater than N.
Input Format

First line contains a single integer N denoting the size of the linked list.
Second line contains N space separated integers denoting the elements of the linked list.
Third line contains a single integer K denoting the number of elements that are to be appended.
Constraints

1 <= N <= 10^4
1 <= K <= 10^4
Output Format

Display all the elements in the modified linked list.
Sample Input

7
1 2 2 1 8 5 6
3

Sample Output

8 5 6 1 2 2 1

Explanation

Initially the linked list is
1→ 2→ 3 → 4 → 5 → 6→ null
and k = 2. After appending the last two elements to the front , the new linked list looks like
5→ 6→ 1→ 2→ 3 → 4 → null
*/
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    node(int d)
    {
        data=d;
        next=NULL;
    }

};


void create(node *&head, int x )
{
    node *n=new node(x);

    if(head==NULL)
    {
        head=n;
        n->next=NULL;
    }
    else
    {
        node *temp=head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=n;
        n->next=NULL;
    }
}


node *knode(node *head, int k)
{
    node *fast=head;
    node*slow=head;

    int c=1;

    while(c<k)
    {
        fast=fast->next;
        c++;
    }

node *prev;


    while(fast->next!=NULL)
    {
        prev=slow;
        fast=fast->next;
        slow=slow->next;
        //prev=prev->next;
    }

    fast->next=head;
    head=slow;
    prev->next=NULL;



return head;
}



void print(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}



int main()
{

    int n1;
    node *head=NULL;

    int i,x,k;

    cin>>n1;
    for(i=0;i<n1;i++)
    {
       cin>>x;
       create(head,x);
    }

    cin>>k;
    k = k%n1;
    if(k==0){
        print(head);
    }else{
    node*final=knode(head,k);

    print(final);
    }

  

    return 0;
}
