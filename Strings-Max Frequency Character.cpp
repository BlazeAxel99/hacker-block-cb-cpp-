/*


Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.
Input Format

String
Constraints

A string of length between 1 to 1000.
Output Format

Character
Sample Input

aaabacb

Sample Output

a

Explanation

For the given input string, a appear 4 times. Hence, it is the most frequent character.

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void count(string str)
{ int max=0;
  char result;
  int count[256]={0};
  for(int i=0;i<str.size();i++)
  {
    
     count[str[i]]++;
    if (max < count[str[i]]) { 
            max = count[str[i]]; 
            result = str[i]; 
        } 
  }
  cout<<result<<endl;
}
int main() {
  string str;
  cin>>str;
  count(str);
	return 0;
}
