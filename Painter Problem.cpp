/*


You have to paint N boards of length {A0, A1, A2, A3 … AN-1}. There are K painters available and you are also given how much time a painter takes to paint 1 unit of board. You have to get this job done as soon as possible under the constraints that any painter will only paint contiguous sections of board. Return the ans % 10000003
Input Format

First line contains three space seperated integers N,K and T ,where
N = Size of array,
K = No of painters available ,
T = Time taken to print each board by one painter
Next line contains N space seperated positive integers denoting size of N boards.
Constraints

1<=N<=100000
1<=K<=100000
1<=T<=1000000
1<=Li<=100000
Output Format

Return minimum time required to paint all boards % 10000003.
Sample Input

2 2 5
1 10

Sample Output

50

Explanation

The first painter can paint the first board in 5 units of time and the second painter will take 50 units of time to paint the second board. Since both can paint simultaneously , the total time required to paint both the boards is 50.
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isPossible(ll *a, ll n, ll k,ll time,ll t)
{
    ll painter_used=1;
    ll time_used=0;
    for(ll i=0;i<n;i++)
    {
        if((a[i])+time_used>time)
        {
            painter_used++;
            time_used=a[i];
            if(painter_used>k) 
            {
               return false;       
            }
        }
        else
        {
            time_used+=(a[i]);
        }
    }
    return true;
}
ll painter(ll *a,ll n,ll k,ll t)
{

    ll sum=0;
    ll start = INT_MIN;
    for(ll i=0;i<n;i++)
    {
        sum+=a[i];
        start = max(start, a[i]);
    }
    ll end=sum;

    ll ans=end;
    while(start<=end)
    {
        ll mid=(end+start)/2;
        if(isPossible(a,n,k,mid,t))
        {
            ans=min(mid,ans);
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }

    }
    return ans;
}
int main()
{
    ll n,k,t;
    cin>>n>>k>>t;
    ll *a = new ll [n]; 
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        a[i] = a[i]*t;
    }
    ll ans=painter(a,n,k,t);
    cout<<ans%10000003<<endl;
    return 0;
}
