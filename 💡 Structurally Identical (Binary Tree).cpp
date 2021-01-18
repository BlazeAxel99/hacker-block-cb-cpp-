/*


Given two trees check if they are structurally identically. Structurally identical trees are trees that have same structure. They may or may not have the same data though.
Input Format

Enter the values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL
Constraints

1 <= N <= 10^4
Output Format

Display the Boolean result
Sample Input

10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false

Sample Output

true

Explanation

The given two trees have the exact same structure and hence we print true.
*/
#include<iostream>
using namespace std;
class Node{
   public:
     int data;
     Node *left;
     Node *right;
     Node(int d){
         data=d;
         left=NULL;
         right=NULL;
     }
 };
 
 bool areTreesStructurallyIdentical(Node *root1, Node *root2) {
    if(root1==NULL and root2==NULL) {
        return true;
    }
    if(root1!=NULL and root2!=NULL) {
        int leftAns = areTreesStructurallyIdentical(root1->left, root2->left);
        int rightAns = areTreesStructurallyIdentical(root1->right, root2->right);
        return leftAns and rightAns;
    }
    return false;
}


 Node* createTree(Node* root){
    int d;
    cin>>d;
    root=new Node(d);
    string x;
    cin>>x;
    if(x=="true"){
        root->left=createTree(root->left);
    }
    cin>>x;
    if(x=="true"){
        root->right=createTree(root->right);
    }
    return root;
 }
 
 void preOrder(Node *root){
     if(root==NULL){
         return;
     }
     cout<<root->data<<" ";
     preOrder(root->left);
     preOrder(root->right);
 }
 int main(){
     Node *root1=NULL;
     Node *root2=NULL;
     root1=createTree(root1);
     root2=createTree(root2);
     if(areTreesStructurallyIdentical(root1,root2)){
         cout<<"true"<<endl;
     }else{
         cout<<"false"<<endl;
     }
 }
