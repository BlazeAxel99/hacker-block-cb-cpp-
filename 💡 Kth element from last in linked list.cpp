/*


Given a linked list with n nodes. Find the kth element from last without computing the length of the linked list.
Input Format

First line contains space separated integers representing the node values of the linked list. The list ends when the input comes as '-1'. The next line contains a single integer k.
Constraints

n < 10^5
Output Format

Output a single line containing the node value at the kth element from last.
Sample Input

1 2 3 4 5 6 -1
3

Sample Output

4

Explanation

The linked list is 1 2 3 4 5 6. -1 is not included in the list. So the third element from the last is 4
*/
#include<iostream>
using namespace std;
class Node 
{
public:
	int data; 
	Node* next; 

	Node(int d) {
		data = d;
		next = NULL;
	}
}; 

void printNthFromLast(Node* head, int n) 
{ 
	int len = 0, i; 
	Node *temp = head; 

	while (temp != NULL) 
	{ 
		temp = temp->next; 
		len++; 
	} 
	if (len < n){
		return; 
	}
	temp = head; 

	for (i=1;i<len-n+1;i++){
		temp = temp->next; 
	}

	cout<<temp->data<<endl; 

	return; 
}

void insertATHead(Node *&head, int data) {
	Node *new_node = new Node(data);
	new_node->next = head;
	head = new_node;
}

void insertAtTail(Node *&head, int data) {
	if(head == NULL) {
		insertATHead(head, data);
		return;
	}
	Node *temp = head;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	Node *new_node = new Node(data);
	temp->next = new_node;
	return;
}

int main() 
{
	Node* head = NULL;
	int n,k;
	while(n!=-1){
		cin>>n;
        if(n!=-1)                 // Added this condition
		insertAtTail(head,n);
	}
	cin>>k;

	printNthFromLast(head, k); 
	return 0; 
}
