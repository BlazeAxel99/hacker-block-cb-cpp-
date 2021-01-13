/*


You are given an array of numbers and a target number(T) , print all unique combinations in the array whose sum equals the target number T. Note that each number in the array may only be used once in the combination.
Note:

    All numbers (including target) will be positive integers
    Elements in the combination must be in non-descending order
    There should be no duplicate combinations 

Input Format

The first line will contain N indicating the number of elements in the array.
The second line will contain space separated N integers , A[i].
The third line will contain the target number T.
Constraints

N <= 15 1<= A[I] <= 100
Output Format

Print all unique combinations of the numbers satisfying the above constraints in a separate line in lexicographic manner.
Sample Input

7
10 1 2 7 6 1 5
8

Sample Output

1 1 6 
1 2 5 
1 7 
2 6 


*/

#include<bits/stdc++.h>
using namespace std;

int temp[1000];

void sumItUp(int arr[], int n, int indArr, int sum, int target, int indTemp) {

	if(sum > target) {
		return;
	}

	if(sum == target) {
		for(int i = 0; i < indTemp; i++) {
			cout << temp[i] << " ";
		}
		cout << endl;
		return;
	}

	if(indArr >= n) {
		return;
	}

	int fre = 0;
	for(int i = indArr; i < n; i++) {
		if(arr[i] == arr[indArr]) fre++;
	}

	for(int i = fre; i >= 0; i--) {
		for(int k = 0; k < i; k++) {
			temp[indTemp + k] = arr[indArr];
		}
		sumItUp(arr, n, indArr + fre, sum + arr[indArr]*i, target, indTemp + i);
	}
}

int main() {
	int n;
	cin >> n;

	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	int target;
	cin >> target;

	sumItUp(arr, n, 0, 0, target, 0);
}
