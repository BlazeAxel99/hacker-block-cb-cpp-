/*


Take input of a generic tree using buildtree() function and also take input K the level at which we need to find the sum.
Input Format

Take a generic tree input where you are first given the data of the node and then its no of children. The input is of preorder form and it is assured that the no of children will not exceed 2. The input of the tree is followed by a single integer K.
Constraints

1 <= Nodes in tree <=1000
1<K<10
Output Format

A single line containing the sum at level K.
Sample Input

1 2
2 2
3 0
4 0
5 2
6 0
7 0
2

Sample Output

20

Explanation

Here the tree looks like

                     1                                 Level 0
                /          \
              2              5                         Level 1
           /      \       /     \
          3       4      6        7                    Level 2

Sum at Level 2 = 3 + 4 + 6 + 7 = 20


*/

#include<bits/stdc++.h>
using namespace std;

class node
{
  public:
    int data;
    node*left;
    node* right;
    
    node(int d)
    {
      data = d;
      left = NULL;
      right= NULL;
    }
};
int sum = 0;
node* buildtree()
{
  int d,num;
  cin>>d;
  node* root = new node(d);
  cin>>num;
  if(num==2)
  {
    root->left = buildtree();
    root->right = buildtree();
  }
  else if(num==1)
    root->left = buildtree();
  return root;
}
void sumAtlevelK(node* root,int k)
{
  if(root==NULL)
    return;
  if(k==0)
    sum+=root->data;
  if(k<1)
    return;
  
  sumAtlevelK(root->left,k-1);
  sumAtlevelK(root->right,k-1);
}
int main() {
  node* root = buildtree();
  int k;cin>>k;
  sumAtlevelK(root,k);
  cout<<sum;
	return 0;
}
