/*


You will be given a numeric string S. Print all the possible codes for S.

Following vector contains the codes corresponding to the digits mapped.

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

For example, string corresponding to 0 is " " and 1 is ".+@$"
Input Format

A single string containing numbers only.
Constraints

length of string <= 10
Output Format

All possible codes one per line in the following order.

    The letter that appears first in the code should come first

Sample Input

12

Sample Output

.a
.b
.c
+a
+b
+c
@a
@b
@c
$a
$b
$c

Explanation

For code 1 the corresponding string is .+@$ and abc corresponds to code 2.
*/
#include<bits/stdc++.h>
using namespace std;
char keypad[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void print(char* in , char* out, int i, int j)
{
     /// base case
     if(in[i]=='\0')
     {
         out[j]=='\0';
         cout<<out<<endl;
         return;
     }

     /// rec case
     int digit=in[i]-'0';
    // if( digit==0)
     //{
      //   print(in,out,i+1,j);
     //}

     for(int k=0;keypad[digit][k]!='\0';k++)
     {
         out[j]= keypad[digit][k];
         print(in ,out, i+1, j+1);
     }
}

int main()
{
   char in[11];
   char out[11]={0};
   cin>>in;
   print(in,out,0,0);
   return 0;

}
