/*


You are given number of pages in n different books and m students. The books are arranged in ascending order of number of pages. Every student is assigned to read some consecutive books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.
Input Format

First line contains integer t as number of test cases. Next t lines contains two lines. For each test case, 1st line contains two integers n and m which represents the number of books and students and 2nd line contains n space separated integers which represents the number of pages of n books in ascending order.
Constraints

1 < t < 50
1< n < 100
1< m <= 50
1 <= Ai <= 1000
Output Format

Print the maximum number of pages that can be assigned to students.
Sample Input

1
4 2
12 34 67 90

Sample Output

113 

Explanation

1st students : 12 , 34, 67 (total = 113)
2nd students : 90 (total = 90)
Print max(113, 90)
*/
#include<bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int n,int m,int curr_min){
	int su=1;
	int pr=0;
	for(int i=0;i<n;i++){
		if(pr + arr[i]>curr_min){
			su++;

			pr = arr[i];
			if(su>m){
				return false;
			}

		}
		else{
			pr += arr[i];
		}
	}
	return true;
}
int fp(int arr[],int n, int m){
	int sum =0;

	if(n<m){
		return -1;
	}
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
int s=arr[n-1];
int e= sum;
int ans= INT_MAX;
while(s<=e){
	int mid=(s+e)/2;
	if(ispossible(arr,n,m,mid)){
	
		ans = min(ans,mid);
		e = mid-1;
	}
	else{
		s = mid+1;
	}
	}
	return ans;
}

int main() {
      int t;
	  cin>>t;
	  for(int i=0;i<t;i++){
		  int n,m;
		  cin>>n>>m;
		  int arr[1000];
		  for(int j=0;j<n;j++){
			  cin>>arr[j];
		  }
		  cout<<fp(arr,n,m)<<endl;
	  }

	return 0;
}
