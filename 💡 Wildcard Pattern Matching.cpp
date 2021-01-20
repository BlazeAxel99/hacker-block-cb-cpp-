/*


Given a text 'str' and a wildcard pattern 'pattern', The wildcard pattern can include the characters ‘?’ and ‘ * ’.
‘?’ – matches any single character
‘*’ – Matches any sequence of characters (including the empty sequence)
Find out if the given text matches the pattern.
Input Format

Each testcase contains two strings. First line contains the text string and the second line contains the pattern.
Constraints

Size(str)*Size(pattern) < 100000000
Output Format

Print 1 if the string matches the pattern, else print 0.
Sample Input

aa
a*a

Sample Output

1


*/

#include<iostream>
using namespace std;
long long int result(string inp, string out)
{
   long long int n = inp.size();
   long long int m = out.size();
   long long int dp[n+1][m+1];
   for(int i=0;i<=n;i++)
		dp[i][0]=0;
	for(int i=0;i<=m;i++)
		dp[0][i]=0;
   dp[0][0] = 1; //both null
   for(int i=1;i<=m;i++) 
   {
       if(out[i-1] == '*')
        dp[0][i] = dp[0][i-1];
   }
   for(int i=1 ; i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           if(out[j-1] == '*')
           {
             dp[i][j] = max(dp[i-1][j],dp[i][j-1]);  
           }
           else if(out[j-1] == '?' || (out[j-1] == inp[i-1]))
           {
              dp[i][j] = dp[i-1][j-1];
           }
           else
             dp[i][j] = 0;
       }
   }
   return dp[n][m];
}
int main()
{
    string inp,output;
    cin>>inp>>output;
    cout<<result(inp,output);
    return 0;
}
