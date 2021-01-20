/*


Tughlaq introduces a strange monetary system. He introduces copper coins and each coin has a number written on it. A coin n can be exchanged in a bank into three coins: n/2, n/3 and n/4. A coin can also be sold for gold. One can get as much grams of gold as the number written on the coin. You have one copper coin. What is the maximum weight of gold one can get from it?
Input Format

The input file contains a single integer n, the number on the coin.
Constraints

0 <= n <= 1 000 000 000
Output Format

Print the maximum weight of gold you can get.
Sample Input

12

Sample Output

13



*/

#include<bits/stdc++.h>
using namespace std;
long long int calculate(vector<long long int> &dp, long long int n)
{
    if(n<10)
        return n;
 
    if(n<1000000)
    {
        if(dp[n])
            return dp[n];
 
        else
        {
            //now, calculate
            long long int x=calculate(dp, n/2)+calculate(dp, n/3)+calculate(dp, n/4);
            dp[n]=max(n,x);
 
            return dp[n];
        }
    }
 
    long long int x=calculate(dp, n/2)+calculate(dp, n/3)+calculate(dp, n/4);
 
    return max(n,x);
}
 
int main()
{
    long long int i,j,k,n;
    long long int x,y,z;
    int t;
 
    vector<long long int> dp(1000000,0);
 
    cin>>n;
    cout<<calculate(dp,n)<<endl;
 
    return 0;
}
