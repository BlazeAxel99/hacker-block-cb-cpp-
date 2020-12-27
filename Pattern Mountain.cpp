/*


Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   

Input Format

Constraints

0 < N < 10
Output Format

Sample Input

4

Sample Output

1						1
1	2				2	1
1	2	3		3	2	1
1	2	3	4	3	2	1

Explanation

Each number is separated from other by a tab.
*/
#include<iostream>

using namespace std;

int main()
{
     int n,i,j,k;
     cin>>n;

     k=(2*n)-3;

     for(i=1;i<=n;i++)
     {
          for(j=1;j<=i;j++)
               cout<<j<<"\t";
          for(j=1;j<=k;j++)
               cout<<"\t";
          if(i==n)
          {
               for(j=i-1;j>=1;j--)
               cout<<j<<"\t";
          }
          else
          {
               for(j=i;j>=1;j--)
               cout<<j<<"\t";
          }
          k-=2;
          cout<<"\n";
     }
}
