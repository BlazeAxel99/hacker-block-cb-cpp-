/*


You will be given an array containing only 0s, 1s and 2s. you have sort the array in linear time that is O(N) where N is the size of the array.
Input Format

The first line contains N, which is the size of the array. The following N lines contain either 0, or 1, or 2.
Constraints

1 <= N <= 10^6
Each input element x, such that x ∈ { 0, 1, 2 }.
Output Format

Output the sorted array with each element separated by a newline.
Sample Input

5
0
1
2
1
2

Sample Output

0
1
1
2
2

*/
#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b){
	return a<b;
}
int main() {
	int t;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++){
		cin>>arr[i];
	}
	int n = sizeof(arr)/sizeof(int);
	sort(arr, arr + n, comp);
	for(int i=0;i<t;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
