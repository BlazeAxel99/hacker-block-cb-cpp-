/*


Find position of the last and first occurrence of a given number in a sorted array. If number does not exist then print lower and upper bound as -1.
Input Format

First line contains an integer n denoting the size of the array.
Second line contains n space separated integers denoting array elements.
Third line contains single integer Q denoting the no of queries.
Q lines follow , each containing a single integer x that is to be searched in the array.
Constraints

1 <= N <= 10^5
1 <= Q <= 100
Output Format

For each query , print the lowerbound and the upperbound for the number x in a new line each.
Sample Input

5
1 2 3 3 4
3
2
3
10

Sample Output

1 1
2 3
-1 -1

Explanation

The first and the last occurrence of 2 in the given array are both 1.
The first occurrence of 3 is at index=2 and last at index=3.
10 is not present in the array so we print -1 for it.
*/

#include<iostream>
using namespace std;

void upperbound(int s,int e,int ans,int n,int a[]){
 
 if(s>e){  // base case should be s>e
     cout<<ans<<" "<<endl;
     return;
 }
 
 int mid=(s+e)/2;
 if(a[mid]>n){
     upperbound(s,mid-1,ans,n,a); // end should be equal to mid-1
 }
 else if(a[mid]<n){
     upperbound(mid+1,e,ans,n,a);// start should be equal to mid+1
 }
 else { 
     ans=mid;
     upperbound(mid+1,e,ans,n,a);          
 }
}

void lowerbound(int s,int e,int ans,int n,int a[]){
 
 if(s>e){  // base case should be s>e
     cout<<ans<<" ";
     return;
 }

 int mid=(s+e)/2;
 if(a[mid]>n){
     lowerbound(s,mid-1,ans,n,a); // end should be equal to mid-1
 }
 else if(a[mid]<n){
     lowerbound(mid+1,e,ans,n,a); // start should be equal to mid+1
 }
 else { 
     ans=mid;
     lowerbound(s,mid-1,ans,n,a);           //lower bound     
 }
}

int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}    
    int t;
    cin>>t;
    int b;
    for(int i=0;i<t;i++){
         cin>>b;
         lowerbound(0,n,-1,b,a);
         upperbound(0,n,-1,b,a);
    }
}
