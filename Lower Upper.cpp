/*


Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.
Input Format

Single Character .
Constraints

-
Output Format

lowercase UPPERCASE Invalid
Sample Input

$

Sample Output

Invalid

Explanation

-
*/
#include<iostream>
using namespace std;
int main() {
	char c;
	cin>>c;
	if(c>=65 && c<=90){
		cout<<"UPPERCASE";
	}
	else if(c>=97 && c<=122){
		cout<<"lowercase";
	}
	else{
		cout<<"Invalid";
	}
	return 0;
}
