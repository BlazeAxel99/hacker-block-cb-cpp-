/*


Take as input str, a string. Write a recursive function which returns a new string in which all duplicate consecutive characters are separated by a ‘ * ’. E.g. for “hello” return “hel*lo”. Print the value returned
Input Format

Enter a String
Constraints

1<= Length of string <= 10^4
Output Format

Display the resulting string (i.e after inserting (*) b/w all the duplicate characters)
Sample Input

hello

Sample Output

hel*lo

Explanation

We insert a "*" between the two consecutive 'l' .
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	getline(cin,s);
	int n = s.length();
	char c[10000];
	strcpy(c, s.c_str());
     
	 
	 for(int i=0;i<n;i++){
		 if(c[i+1]==c[i]){
			 cout<<c[i]<<"*";
		 }
		 else{
			 cout<<c[i];
		 }
	 }
	return 0;
}
