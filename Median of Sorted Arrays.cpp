/*


We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.
Input Format

First line contains the input n. Second and Third line contains n space separated integers.
Constraints

N < 1000
Output Format

Print the median in a single line.
Sample Input

5
1 3 5 7 9
2 4 6 8 10

Sample Output

5

Explanation

Merged Array: [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10] So the median element is 5
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	int a[2*t];
	for(int i=0;i<2*t;i++){
		cin>>a[i];

	}
	int n =sizeof(a)/sizeof(int);
	sort(a,a+n);
	cout<<a[t-1];
	return 0;
}
