/*


Vivek loves to play with array . One day Vivek just came up with a new array game which was introduced to him by his friend Ujjwal. The rules of the game are as follows:

Initially, there is an array, A , containing 'N' integers.

In each move, Vivek must divide the array into  two non-empty contiguous parts such that the sum of the elements in the left part is equal  to the sum of the elements in the right part. If Vivek can make such a move, he gets '1' point; otherwise, the game ends.

After each successful move, Vivek have to discards either the left part or the right part and continues playing by using 

the remaining partition as array 'A'.

Vivek loves this game and wants your help getting the best score possible. Given 'A', can you find and print the maximum number of points he can score?
Input Format

First line of input contains an integer T denoting number of test cases. Each further Test case contains first line an integer 'N' , the size of array 'A'. After that 'N' space separated integers denoting the elements of array.
Constraints

1 <= T <= 10 1 <= N <= 17000 0 <= A[i] <= 10^9
Output Format

For each test case, print Vivek's maximum possible score on a new line.
Sample Input

3
3
3 3 3
4
2 2 2 2
7
4 1 0 1 1 0 1

Sample Output

0
2
3



*/



#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll bs(ll low,ll high,ll key,vector<ll>&arr){
    if(low>high)
        return INT_MAX;
    ll mid = (low+high)/2;
    if(arr[mid]==key)
        return min(mid,bs(low,mid-1,key,arr));
    else if(arr[mid]>key)
        return bs(low,mid-1,key,arr);
    else
        return bs(mid+1,high,key,arr);
}
ll solve(vector<ll>&arr,ll start,ll end,map<pair<ll,ll>,ll> &dp){
    if(start>=end)
        return 0;
    if(dp.find({start,end})!=dp.end())
        return dp[{start,end}];
    ll key = arr[end]-arr[start-1]; //total sum of this subArray
    if(key%2)
        return 0;
    key = (key/2)+arr[start-1]; //left half sum
    ll lower = min(end,bs(start,end,key,arr));//find first index where left half sum == right half sum
    if(lower<end && arr[lower]-arr[start-1] == arr[end]-arr[lower+1-1])
        dp[{start,end}] = 1+max(solve(arr,start,lower,dp),solve(arr,lower+1,end,dp));
    return dp[{start,end}];
}
int main(){
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        vector<ll> arr(N+1,0);
        for(int i=1;i<=N;i++)
            cin >> arr[i],arr[i]+=arr[i-1];
        map<pair<ll,ll>,ll> dp;
       cout<<solve(arr,1,N,dp)<<endl;
    }
}
