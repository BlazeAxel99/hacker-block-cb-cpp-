/*


Piyush and Nimit are playing a coin game. They are given n coins with values x1, x2 …. xn where 'n' is always even. They take alternate terms. In each turn, a player picks either the first coin or the last coin from the row and removes it from the row. The value of coin is received by that player. Determine the maximum value that Piyush can win with if he moves first. Both the players play optimally.
Input Format

First line contains the number of coins 'n'.
Second line contains n space separated integers where ith index denotes the value of ith coin.
Constraints

1 < N <= 30 , N is always even
0 <= Ai <= 1000000
Output Format

Print a single line with the maximum possible value that Piyush can win with.
Sample Input

4
1 2 3 4

Sample Output

6

Explanation

Piyush will pick the coin 4. Then Nimit can pick either 1 or 3. In both the cases piyush picks coin 2 and wins with a total of 6.
*/
#include <bits/stdc++.h>
using namespace std;
 
int oSRec(int arr[], int i, int j, int sum)
{
    if (j == i + 1)
        return max(arr[i], arr[j]);
 
    // For both of your choices, the opponent
    // gives you total sum minus maximum of
    // his value
    return max((sum - oSRec(arr, i + 1, j, sum - arr[i])),
               (sum - oSRec(arr, i, j - 1, sum - arr[j])));
}
 
// Returns optimal value possible that a player can
// collect from an array of coins of size n. Note
// than n must be even
int optimalStrategyOfGame(int* arr, int n)
{
    int sum = 0;
    sum = accumulate(arr, arr + n, sum);
    return oSRec(arr, 0, n - 1, sum);
}
 
// Driver program to test above function
int main()
{
    int n;
	cin>>n;
	int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int t = sizeof(arr)/sizeof(int);
	cout<<optimalStrategyOfGame(arr,t);
    return 0;
}
