/*


You are given a string containing only opening and closing brackets "(" and ")" of size m. You have to append 2 strings a and b in the order a+s+b and make them valid string of size n with the following properties,

    At any index, number of opening brackets should be greater than closing brackets
    No. of opening and closing brackets should be equal.

You have to tell number of combinations of string a and b if its possible, otherwise print "0".
Print the answer with modulo 109 + 7.
Input Format

1st Line: n m 2nd Line: string s
Constraints

1<= m <= n <= 10^5
n-m <= 1200
Output Format

The number of combinations of a and b. Otherwise -1
Sample Input

4 2
((

Sample Output

1

Explanation

Only 1 possible case a="" , b="))"

*/

#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;

ll mod = 1e9 + 7;
char ss[100001];
int n, m;
ll dp[2222][2222][2];

int pre = 0, bef = 0;
int L;
ll solve(int p, int open, int take){
	if (p == L)return take && (open == 0);
	ll &ret = dp[p][open][take];
	if (ret != -1)return ret;
	ret = 0;
	if (!take){
		if (open >= pre)
			ret = (ret + solve(p + 1, open - pre +bef, 1)) % mod;
	}
	ret = (ret + solve(p + 1, open +1, take)) % mod;
	if(open)ret = (ret + solve(p + 1, open - 1, take)) % mod;
	return ret;
}
int main(){
	cin >> n >> m;
	L = n - m + 1;
	scanf("%s", ss);
	string s(ss);
	if (n % 2){
		cout << 0;
		return 0;
	}
	
	int x = 0;
	rep(i, m){
		if (s[i] == '(') x++;
		else x--;
		if (x < 0)pre++, x++;
	}
	bef = x;
	memset(dp, -1, sizeof dp);
	cout << solve(0, 0, 0);
	return 0;
}
