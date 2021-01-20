/*


Given preorder and inorder create the tree
Input Format

Enter the size of the preorder array N then add N more elements and store in the array denoting the preorder traversal of the tree. Then enter the size of the inorder array M and add M more elements and store the inorder traversal of the array.
Constraints

1 <= N, M <= 10^4
Output Format

Display the tree using a modified preorder function. For each node , first print its left child's data , then the data of the root itself , then the data of its right child. Do this for each node in a new line in preorder manner. If one of the children does not exist print END in its place. Refer to the sample testcase.
Sample Input

3
1 2 3
3
3 2 1

Sample Output

2 => 1 <= END
3 => 2 <= END
END => 3 <= END

Explanation

The above tree looks like

             1
           /
         2
       /
     3


*/

using namespace std;
class node
{
  public:
    int data;
    node*left;
    node*right;
    
    node(int d)
    {
      data=d;
      left=NULL;
      right=NULL;
    }
};
node* buildTreeInPre(int in[],int pre[],int s,int e)
{
    static int i = 0;
    if(s>e)
        return NULL;
    ///REC CASE
    node*root = new node(pre[i]);
    ///linear search
    int j =0;
    for(j=s;s<=e;j++){
        if(in[j]==pre[i])
            break;
    }
    i++;

    root->left = buildTreeInPre(in,pre,s,j-1);
    root->right = buildTreeInPre(in,pre,j+1,e);
    return root;
}
void print(node*root)
{
  if(root==NULL){
    return;
  }
  if(root->left)
    cout<<root->left->data;
  else
    cout<<"END";
  
  cout<<" => "<<root->data<<" <= ";
  
  if(root->right)
    cout<<root->right->data<<endl;
  else
    cout<<"END"<<endl;
  print(root->left);
  print(root->right);
}
int main() {
  int n;
  int pre[100],in[100];
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>pre[i];
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>in[i];
  node*root = buildTreeInPre(in,pre,0,n-1);
  print(root);
	return 0;
}
