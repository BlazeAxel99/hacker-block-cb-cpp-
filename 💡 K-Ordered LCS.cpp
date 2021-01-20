/*

ny programmer worth his salt would be familiar with the famous Longest Common Subsequence problem. Mancunian was asked to solve the same by an incompetent programmer. As expected, he solved it in a flash. To complicate matters, a twist was introduced in the problem.

In addition to the two sequences, an additional parameter k was introduced. A k-ordered LCS is defined to be the LCS of two sequences if you are allowed to change atmost k elements in the first sequence to any value you wish to. Can you help Mancunian solve this version of the classical problem?
Input Format

The first line contains three integers N, M and k, denoting the lengths of the first and second sequences and the value of the provided parameter respectively. The second line contains N integers denoting the elements of the first sequence. The third line contains M integers denoting the elements of the second sequence.
Constraints

1 <= N, M <= 2000
1 <= k <= 5
1 <= element in any sequence <= 109
Output Format

Print the answer in a new line.
Sample Input

5 5 1
1 2 3 4 5
5 3 1 4 2

Sample Output

3

*/

#include<iostream>
#include<string>
#include<stack>
using namespace std;
int dp[2001][2001][6];
int N,M;
int LCS(long* a,long* b,int n,int m,int k)
{
	if(n==N||m==M)
        return 0;

    if(dp[n][m][k]!=-1)
        return dp[n][m][k];

   int res=0;

    if(a[n]==b[m])
        res=1+LCS(a,b,n+1,m+1,k);
    else
    {
        if(k>0)
        {
             res=1+LCS(a,b,n+1,m+1,k-1);
        }
         res=max(res,LCS(a,b,n,m+1,k));
        res=max(res,LCS(a,b,n+1,m,k));
    } 
     return dp[n][m][k]=res; 
}

int main()
{
	int k;
    cin>>N>>M>>k;

    long a[N],b[M];
    for(int i=0;i<N;i++)
        cin>>a[i];

    for(int i=0;i<M;i++)
        cin>>b[i];

    for(int i=0;i<=2000;i++)
        for(int j=0;j<=2000;j++)
            for(int k=0;k<=5;k++)
                dp[i][j][k]=-1;

	cout<<LCS(a,b,0,0,k);

	return 0;
}
