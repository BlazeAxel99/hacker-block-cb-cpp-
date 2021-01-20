/*


Given a binary tree. Print the zig zag order i.e print level 1 from left to right, level 2 from right to left and so on. This means odd levels should get printed from left to right and even levels should be printed from right to left.
Input Format

Enter the values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL
Constraints

None
Output Format

Display the values in zigzag level order in which each value is separated by a space
Sample Input

10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false

Sample Output

10 30 20 40 50 60 73 

*/

#include<iostream>
using namespace std;
class node{
public:
	int data;
	node* left;
	node* right;

	node(int data){
		this->data = data;
		this->left = NULL;
		this->right =NULL;
	}
};



node*buildtree(string s)
{
    if(s=="true")
    {
        int d;
        cin>>d;
        node*root=new node(d);

        string l;
        cin>>l;

        if(l=="true")
        {
            root->left=buildtree(l);  }

        string r;
        cin>>r;

        if(r=="true")
        {
            root->right=buildtree(r);
        }
        return root;
    }
    return NULL;
}

int height(node* root)  
{  
    if (root == NULL)  
        return 0;  
    else
    {  
        /* compute the height of each subtree */
        int lheight = height(root->left);  
        int rheight = height(root->right);  
  
        /* use the larger one */
        if (lheight > rheight)  
            return(lheight + 1);  
        else return(rheight + 1);  
    }  
} 

void printlevel(node* root,int level){

    if(root==NULL){return;}
    if(level==1){cout<<root->data<<" ";}
    if(level>1){
    printlevel(root->left,level-1);
    printlevel(root->right,level-1);
    }
}

void printlevel2(node* root,int level2){

    if(root==NULL){return;}
    if(level2==1){cout<<root->data<<" ";}
    if(level2>1){
    printlevel2(root->right,level2-1);
    printlevel2(root->left,level2-1);
    }
}

void printlevelorder(node*root){
     
    int h=height(root);
    for(int i=1;i<=h;i++){
        if(i%2!=0){printlevel(root,i);}
        else{
            printlevel2(root,i);
        }
    }
}

int main(){

 node*root=NULL;

    root=buildtree("true");
    printlevelorder(root);

    return 0;
}
