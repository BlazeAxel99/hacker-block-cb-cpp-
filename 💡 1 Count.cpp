/*


Given an array of size n with 0s and 1s , flip at most k 0s to get the longest possible subarray of 1s.
Input Format

First Line : n, size of array and k Second Line : n space separated numbers (0s or 1s)
Constraints

n <= 10^5 0 <= k <= n
Output Format

First Line : Size of subarray Second Line : Array after flipping k 0s
Sample Input

10 2
1 0 0 1 0 1 0 1 0 1

Sample Output

5
1 0 0 1 1 1 1 1 0 1


*/

#include<iostream>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int l=0,r=0;
	int zeros=0;
	int maxlength=0;
	int length=0;

    int maxLengthL = -1;
    int maxLengthR = -1;

	while(r<=n-1){
		if(a[r]==1){
			length=r-l+1;
			r++;
		}
		else{
			zeros++;
			while(zeros>k){
				if(a[l]==0)zeros--;
				l++;
			}
			length=r-l+1;
			r++;
		}

        if(length > maxlength) {
            maxlength = length;
            maxLengthR = r - 1;
            maxLengthL = l;
        }
	}

	cout<<maxlength<<endl;
	for(int i=0;i<maxLengthL;i++){
		cout<<a[i]<<" ";
	}
    if(maxLengthL != -1)
	for(int i = maxLengthL;i<=maxLengthR;i++){
		cout<<1<<" ";
	}
	for(int i=maxLengthR+1;i<n;i++){
     	cout<<a[i]<<" ";
	}
	return 0;
}
