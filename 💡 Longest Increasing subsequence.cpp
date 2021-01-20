/*


Find the length of the longest subsequence in a given array A of integers such that all elements of the subsequence are sorted in strictly ascending order.
Input Format

The first line contains a single integer n.
Next line contains n space separated numbers denoting the elements of the array.
Constraints

0 < n< 105
0 < Ai < 105
Output Format

Print a single line containing a single integer denoting the length of the longest increasing subsequence.
Sample Input

6
50 3 10 7 40 80

Sample Output

4

Explanation

The longest subsequence in test case is - 3,7,40,80

*/

#include<iostream>
using namespace std;
int LIS(int ar[],int n)
{
    
    int DP[n+1],temp=1;
    for(int i=0;i<n;i++)
    {
        DP[i]=1;
        for(int j=i-1;j>=0;j--)
            if(ar[i]>ar[j])
                DP[i]=max(DP[i],DP[j]+1);
        temp=max(temp,DP[i]);
    }

    return temp;
}

int main()
{
int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++)
    cin>>ar[i];
cout<<LIS(ar,n);
return 0;
}
