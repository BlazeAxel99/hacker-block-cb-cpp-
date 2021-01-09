/*


Given 2 sorted linked lists , merge the two given sorted linked list and print the final Linked List.
Input Format

First Line contains T the number of test cases.
For each test case :
Line 1 : N1 the size of list 1
Line 2 : N1 elements for list 1
Line 3 : N2 the size of list 2
Line 4 : N2 elements for list 2
Constraints

1 <= T <= 1000
0<= N1, N2 <= 10^6
-10^7 <= Ai <= 10^7
Output Format

For each testcase , print the node data of merged linked list.
Sample Input

1
4
1 3 5 7
3
2 4 6

Sample Output

1 2 3 4 5 6 7 

Explanation

The two lists after merging give the sorted output as [1,2,3,4,5,6,7] .
*/
#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node*next;

	node(int d){
		data=d;
		next=NULL;
	}
};

void insertAtTail(node*&head,int data){

	if(head==NULL){
		head=new node(data);
		return;
	}
	node*tail=head;
	while(tail->next!=NULL){
		tail=tail->next; //last node of the linked list
	}
	tail->next=new node(data);
	return ;
}

void buildList(node*&head){
   int n;
	cin>>n;

	while(n>0){
		int data;
		cin>>data;
		insertAtTail(head,data);
		n--;
	}
}

void print(node*head){
	if(head == NULL){
		return;
	}
	cout<<head->data<<" ";
	print(head->next);
}

node* merge(node*a,node*b){
	if(a==NULL){
		return b;
	}else if(b==NULL){
		return a;
	}
	node*c;
	//compare elemnt a and b
	if(a->data <= b->data){
		c=a;
		c->next=merge(a->next,b);//here a->next means that a->next ids the remaining part and b and then again the function will 
	}else if(a->data>b->data){
		c=b;
		c->next=merge(a,b->next);//here if c doenot point to a then the smallest element points is in the b node
	}
	return c;
}

int main(){
	 int t;
	cin>>t;
	while (t--){
		int n;
    		//cin>>n;
		node *head = NULL;
		node *head2 = NULL;
		buildList(head);
    		//cin>>n;
		buildList(head2);
		node* newhead = merge(head,head2);
		print(newhead);
		// print(head2);
		cout<<endl;
	}
	return 0;
}
