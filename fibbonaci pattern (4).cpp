/*
Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34

Input Format
Constraints
0 < N < 100

Output Format
Sample Input
4
Sample Output
0 
1    1 
2    3     5 
8   13    21    34
Explanation
Each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.
*/

#include<iostream>
using namespace std;
int main()
{
int N,row,col,n2=1,n1=0,sum=0;
cin>>N;
for(row=1;row<=N;row++)
{
for(col=1;col<=row;col++)
{
    cout<<n1<<"  ";
    sum=n1+n2;
    n1=n2;
    n2=sum;

}
cout<<endl;
}
}
