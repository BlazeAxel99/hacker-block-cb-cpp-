/*


You are given two integers n and k. Find the greatest integer x, such that, x^k <= n.
Input Format

First line contains number of test cases, T. Next T lines contains integers, n and k.
Constraints

1<=T<=10
1<=N<=10^15
1<=K<=10^4
Output Format

Output the integer x
Sample Input

2
10000 1
1000000000000000 10

Sample Output

10000
31

Explanation

For the first test case, for x=10000, 10000^1=10000=n

*/

#include<bits/stdc++.h>
using namespace std;

int kthRoot(unsigned long long int n, unsigned long long k){
     unsigned long long int s=0,e=n, mid,x;
    while(s<=e){
        mid=(s+e)/2;
        if(pow(mid,k)==n){
            x=mid;
            break;
        }

        if(pow(mid,k)<n){
            s=mid+1;
            x=mid;
        }else{
            e=mid-1;

        }
    }
    return x;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        
        int n,k;
        unsigned long long int no;
    cin>>no>>k;
    unsigned long long int ans=kthRoot(no,k);
    cout<<ans<<endl;

    }
    
    
    
   
