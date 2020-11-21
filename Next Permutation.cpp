/*


Given an array Arr[], Treat each element of the array as the digit and whole array as the number. Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers.

If such arrangement is not possible, it must be rearranged as the lowest possible order ie, sorted in an ascending order.

Note: The replacement must be in-place, do not allocate extra memory.
Input Format

The First Line contains the Number of test cases T.
Next Line contains an Integer N, number of digits of the number.
Next Line contains N-space separated integers which are elements of the array 'Arr'.
Constraints

1 <= T <= 100
1 <= N <= 1000
0 <= Ai <= 9
Output Format

Print the Next Permutation for each number separated by a new Line.
Sample Input

2
3
1 2 3 
3
3 2 1

Sample Output

1 3 2
1 2 3

Explanation

Possible permutations for {1,2,3} are {1,2,3} , {1,3,2} , {2,1,3} , {2,3,1}, {3,1,2} and {3,2,1}. {1,3,2} is the immediate next permutation after {1,2,3}.
For the second testcase , {3,2,1} is the last configuration so we print the first permutation as its next permutation.

*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int tt,s;
	int a[1000];
	cin>>tt;
	while(tt--){
		cin>>s;
		
        for(int i=0;i<s;i++){
              cin>>a[i];
		}

		next_permutation(a,a+s);

		 for(int i=0;i<s;i++){
              cout<<a[i]<<" ";
		}
		cout<<endl;


         

	}
	return 0;
}
