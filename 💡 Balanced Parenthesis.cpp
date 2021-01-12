/*


You are given a string of brackets i.e. '{', '}' , '(' , ')', '[' , ']' . You have to check whether the sequence of parenthesis is balanced or not.
For example, "(())", "(())()" are balanced and "())(", "(()))" are not.
Input Format

A string of '(' , ')' , '{' , '}' and '[' , ']' .
Constraints

1<=|S|<=10^5
Output Format

Print "Yes" if the brackets are balanced and "No" if not balanced.
Sample Input

(())

Sample Output

Yes

Explanation

(()) is a balanced string.
*/
#include<bits/stdc++.h>
using namespace std;

bool isBalancedParenthesis(string expr)
{
	stack<char>s;
	for(int i=0;i<expr.length();i++)
	{
		char ch = expr[i];
		if(ch=='(' or ch=='[' or ch=='{'){
			s.push(ch);
		}
		else if(ch==')'){
			if(!s.empty() and s.top()=='('){
				s.pop();
				continue;
			}

			else{
				return false;
			}

		}
		else if(ch==']'){
			if(!s.empty() and s.top()=='['){
				s.pop();
				continue;
			}
			else{
				return false;
			}

		}
		else if(ch=='}'){
				if(!s.empty() and s.top()=='{'){
					s.pop();
					continue;
				}
				else{
					return false;
				}
			}
	}
	if(s.empty()){
		return true;
	}
	return false;
	if(s.size()==0)
		return true;
	else
		return false;
}
int main()
{
	string s;
	getline(cin,s);
	//cout<<s<<endl;
	if(isBalancedParenthesis(s))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
