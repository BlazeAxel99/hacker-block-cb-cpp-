/*


Reverse a Stack using Recursion. Do not use any extra stack.
Input Format

First line contains an integer N (size of the stack).
Next N lines follow each containing an integer to be stored in the stack where the last integer is at the top of the stack.
Constraints

1 <= N <= 10^4
Output Format

Output the values of the reversed stack with each value in one line each.
Sample Input

3
3
2
1

Sample Output

3
2
1

Explanation

Original Stack = [ 3 , 2 , 1 ] <-TOP
Reverse Stack = [ 1 , 2 , 3 ] <-TOP 
*/
#include<bits/stdc++.h>
using namespace std;
void print(stack<int>st)
{
	while(!st.empty())
	{
		cout<<st.top()<<endl;
		st.pop();
	}
}
void insert(stack<int> &st,int x)
{
	if(st.empty())
	{
		st.push(x);
        return;
	}
	else
	{
		int y=st.top();
		st.pop();
		insert(st,x);
		st.push(y);
	}
}
void reverse(stack<int> &st)
{
	if(st.empty())
	{
		return;
	}
	else
	{
		int x=st.top();
		st.pop();
		reverse(st);
		insert(st,x);
	}

}


int main() {
	stack<int>st;
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		st.push(x);
	}
	reverse(st);
	print(st);
    return 0;
}
