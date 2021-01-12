/*


We are given a circular array, print the next greater number for every element. If it is not found print -1 for that number. To find the next greater number for element Ai , start from index i + 1 and go uptil the last index after which we start looking for the greater number from the starting index of the array since array is circular.
Input Format

First line contains the length of the array n. Second line contains the n space separated integers.
Constraints

1 <= n <= 10^6
-10^8 <= Ai <= 10^8 , 0<= i< n
Output Format

Print n space separated integers each representing the next greater element.
Sample Input

3
1 2 3

Sample Output

2 3 -1

Explanation

Next greater element for 1 is 2,
for 2 is 3 but not present for 3 therefore -1
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
using namespace std;
int main() {
	ll int n;
	cin>>n;
	ll int a[2*n];
	for(ll int i=0;i<n;i++)cin>>a[i];
	for(ll int i=n;i<2*n;i++)a[i]=a[i-n];
	stack <ll int> s;
	//s.push(a[0]);
    ll int ngr[2*n];
	for(ll int i=2*n-1;i>=0;i--)
    {
	    while(!s.empty() && s.top()<=a[i])
        {
	        s.pop();
	    }
        if(s.empty())ngr[i]=-1;
        else ngr[i]=s.top();
	    s.push(a[i]);
	}
	// while(!s.empty())
	// {
	// cout<<-1<<" ";
	// s.pop();
	// }
    for(ll int i=0;i<n;i++)cout<<ngr[i]<<" ";
    cout<<endl;
}
