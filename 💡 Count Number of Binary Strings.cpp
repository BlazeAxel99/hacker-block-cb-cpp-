/*


You are provided an integers N. You need to count all possible distinct binary strings of length N such that there are no consecutive 1’s.
Input Format

First line contains integer t which is number of test case. For each test case, it contains an integer n which is the the length of Binary String.
Constraints

1<=t<=100 1<=n<=90
Output Format

Print the number of all possible binary strings.
Sample Input

2
2
3

Sample Output

3
5

Explanation

1st test case : 00, 01, 10 2nd test case : 000, 001, 010, 100, 101


*/

#include<iostream>
using namespace std;
long long int dp[91][2];
long long int count(int n,int s)
{
	if(n==1)
		return 1;
	
	if(dp[n][s]!=-1)
		return dp[n][s];

	if(s==0)
		dp[n][s]=count(n-1,1)+count(n-1,0);
	else
		dp[n][s]=count(n-1,0);

	return dp[n][s];
}

int main() {
	int t,n;
	cin>>t;
	
	while(t--)
	{
		for(int i=0;i<=90;i++){	
			for(int j=0;j<=2;j++){//change
				dp[i][j]=-1;
			}
		}
		cin>>n;
		long long int res=count(n,1)+count(n,0);
		cout<<res<<endl;
	}
	return 0;
}
