/*

Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Input Format
Enter value of N ( >=5 )

Constraints
5 <= N <= 99

Output Format
Print the required pattern.

Sample Input
7
Sample Output
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Explanation
Catch the pattern for the corresponding input and print it accordingly.
*/
#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int hn=(n+1)/2;
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=n;j++)
	    {
	        if(i==hn||j==hn||(i==1 && j>hn)||(i==n && j<hn)||(j==1 && i<hn)||(j==n && i>hn))
	        cout<<"*";
	        else cout<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
