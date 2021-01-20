/*


Given a set of "n" non-negative integers, and a value "sum", determine if there is a subset of the given set with sum equal to given sum.
Input Format

1st Line: n sum 2nd Line: a1 a2……an (Array Values)
Constraints

1<= n <= 1000
1<= sum <= 10^5
1<= Ai <=10^4
Output Format

Yes, if sum exist No, it sum does not exist
Sample Input

5 10
1 2 3 4 5

Sample Output

Yes


*/
#include<bits/stdc++.h>
using namespace std;

long long int dp[5000][5000];

int subsetSum(int arr[], int n, int sum)
{
	// return true if sum becomes 0 (subset found)
	if (sum == 0)
		return 1;

	// base case: no items left or sum becomes negative
	if (n < 0 || sum < 0)
		return 0;
	 
	 if(dp[n][sum]!=-1)
	  return dp[n][sum];

	 else
     {
		int include = subsetSum(arr, n - 1, sum - arr[n]);
		int exclude = subsetSum(arr, n - 1, sum);
        dp[n][sum]=include||exclude;
	  }

	return dp[n][sum];
}

int main()
{
    int n,sum;
	cin>>n>>sum;

	int arr[n];	

	for(int i=0;i<n;i++)
	 cin>>arr[i];

	memset(dp,-1,sizeof(dp));

	if (subsetSum(arr, n - 1, sum))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
