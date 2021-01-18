/*


You are given an array of integers. First of all , You have to form a binary search tree from given integers. Now you have provided two integers k1 and k2. You have to print all nodes of BST within the range k1 and k2 (including k1 and k2).
Input Format

First line contains integer t as number of test cases. Each test case contains three lines. First line contains an integer n which is length of the array and second line contains n space separated integer. Third line contains the value of k1 and k2.
Constraints

1 < t < 20
1 < n < 50
Output Format

For each test case you have to print preorder traversal of the tree first and then print all nodes within the range k1 and k2 (inclusive). Refer to the sample testcase for exact output format.
Sample Input

1
5
4 3 2 5 6
3 5

Sample Output

# Preorder : 4 3 2 5 6 
# Nodes within range are : 3 4 5 

Explanation

The tree looks like

                 4
              /      \
           3           5
        /                \
       2                  6

The nodes between the range 3 to 5 are 3,4,5.


*/

#include<iostream>
using namespace std;

class node{

public:

    int data;
    node*right;
    node*left;

    node(int d){

        data=d;
        left=NULL;
        right=NULL;

    }

};

void preorder(node*root){

    
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";

    
    preorder(root->left);
    preorder(root->right);

    return;

}


void PrintRange(node* root,int a,int b){

    if(root==NULL){
        return;
    }

    PrintRange(root->left,a,b);
    if(root->data<=b and root->data>=a){
        cout<<root->data<<" ";
    }
    PrintRange(root->right,a,b);
    return;

}

node* insert(node* root, int value){
	if(root==NULL){
		node *nn = new node(value);
		return nn;
	}
	if(value>root->data){
		root->right=insert(root->right, value);
	}else if(value<root->data){
		root->left=insert(root->left, value);
	}
	return root;
}

node* ArrToBST(int* arr, node* root, int n){
	for(int i=0; i<n; i++){
		root = insert(root,arr[i]);
	}
	return root;
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];


        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        node* root=new node(arr[0]);
		root = ArrToBST(arr,root,n);
         int b,c;
         cin>>b>>c;

        cout<<"# Preorder : ";
        preorder(root);        
        cout<<endl<<"# Nodes within range are : ";
        PrintRange(root,b,c);
        cout<<endl;

    }    

}
