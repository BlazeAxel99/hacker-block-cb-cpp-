/*


Given a Binary tree check if it is balanced i.e. depth of the left and right sub-trees of every node differ by 1 or less.
Input Format

Enter the values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL
Constraints

1 <= No of nodes <= 10^5
Output Format

Display the Boolean result
Sample Input

10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false

Sample Output

true

Explanation

The tree looks like

                 10
              /       \
           20           30
        /     \       /     \
       40      50    60      73

The given tree is clearly balanced as depths of the left and right sub-trees of every node differ by 1 or less.
*/

#include <iostream>
#include <queue>
using namespace std;

using namespace std;
class node{
	public:
	int data;
	node*left;
	node*right;
	node(int d){
	data=d;
	left=right=NULL;
	}
};
node*buildtree(string s){
	if(s=="true"){
	int d;
	cin>>d;
	node*root=new node(d);
	string l;
	cin>>l;
	if(l=="true"){
	root->left=buildtree(l);
	}
	string r;
	cin>>r;
	if(r=="true"){
	root->right=buildtree(r);
	}
	return root;
	}
	return NULL;
}
class HB{
	public:
	int height;
	bool balance;
};
HB isheight(node*root){
	HB p;
	if(root==NULL){
	p.height=-1;
	p.balance=1;
	return p;
	}
	HB left=isheight(root->left);
	HB right=isheight(root->right);
	p.height=max(left.height,right.height)+1;
	if(left.height-right.height<=1&&left.balance&&right.balance){
	p.balance=true;
	}
	else{
	p.balance=false;
	}
	return p;
}
void print(node*root){
if(root==NULL){
	return;
}
cout<<root->data<<" ";
print(root->left);
print(root->right);
}
int main(){
	node*root=NULL;
	root=buildtree("true");
	if(isheight(root).balance){
	cout<<"true";
	}
	else{
	cout<<"false";
	}
}
