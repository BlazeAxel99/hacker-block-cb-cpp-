/*


Piyush and Nimit are playing a coin game. They are given n coins with values x1, x2 …. xn where 'n' is always even. They take alternate terms. In each turn, a player picks either the first coin or the last coin from the row and removes it from the row. The value of coin is received by that player. Determine the maximum value that Piyush can win with if he moves first. Both the players play optimally.
Input Format

First line contains the number of coins 'n'.
Second line contains n space separated integers where ith index denotes the value of ith coin.
Constraints

1 < N <= 10000 , N is always even
0 <= Ai <= 1000000
Output Format

Print a single line with the maximum possible value that Piyush can win with.
Sample Input

4
1 2 3 4

Sample Output

6

Explanation

Piyush will pick the coin 4. Then Nimit can pick either 1 or 3. In both the cases Piyush picks coin 2 and wins with a total of 6.

*/
#include<iostream>
using namespace std;
long long int dp[10001][10001];
long long int optimal_strategy(long long int ar[],long long int i,long long int j)
{
 if(i>j)
 {
     return 0;
 }
 if(dp[i][j]!=-1)
 {
     return dp[i][j];
 }
 int q1=ar[i]+min(optimal_strategy(ar,i+2,j),optimal_strategy(ar,i+1,j-1));
 int q2=ar[j]+min(optimal_strategy(ar,i,j-2),optimal_strategy(ar,i+1,j-1));
 int q=max(q1,q2);
 dp[i][j]=q;
 return dp[i][j];
}
int main() 
{
	long long int n;
    cin>>n;
    long long int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            dp[i][j]=-1;
        }
    }
    long long int ans=optimal_strategy(ar,0,n-1);
    cout<<ans;
    return 0;
}
