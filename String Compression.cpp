/*


Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.
Input Format

A single String S
Constraints

1 < = length of String < = 1000
Output Format

The compressed String.
Sample Input

aaabbccds

Sample Output

a3b2c2d1s1

Explanation

In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c' is repeated twice and 'd and 's' occurred only once.

*/
#include<iostream>
int main() { using namespace std;
char arr[101];
cin>>arr;   ///CHANGE. Input of strings is taken in this way.
char ch;
int count=0;
ch=arr[0];
int i=0;
while(arr[i]!='\0')
{
  if(ch==arr[i])
  {
    count++;
  }
  else{
    cout<<ch<<count;
    ch=arr[i];
    count=1;
  }
  i++;
}
cout<<ch<<count;
	return 0;
}
