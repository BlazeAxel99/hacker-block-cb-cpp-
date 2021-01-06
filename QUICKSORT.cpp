/*


Given an array A, of N elements. Sort the array using quicksort algorithm.(Note : Use randomized quicksort, otherwise worst case will not pass).
Input Format

A single integer, N, denoting the number of elements in array. Next line contains N integers, denoting the elements of array.
Constraints

1<=N<=2*10^5
|Ai|<=10^9
Output Format

Print in a single line, N spaced integers, denoting the elements of array A in sorted order.
Sample Input

5
3 6 4 1 2

Sample Output

1 2 3 4 6 

*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
   int a[n],b[n],count=0;;
	for(int i=0;i<n;i++){
      cin>>a[i];
	  
	}
	int t = sizeof(a)/sizeof(int);
	sort(a,a+t);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
		
	
	return 0;
}
