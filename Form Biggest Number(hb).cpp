/*


You are provided an array of numbers. You need to arrange them in a way that yields the largest value.
Input Format

First line contains integer t which is number of test case.
For each test case, you are given a single integer n in the first line which is the size of array A[] and next line contains n space separated integers denoting the elements of the array A .
Constraints

1<=t<=100

1<=m<=100

1<=A[i]<=10^5
Output Format

Print the largest value.
Sample Input

1
4
54 546 548 60

Sample Output

6054854654

Explanation

Upon rearranging the elements of the array , 6054854654 is the largest possible number that can be generated.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
// A comparison function which is used by sort() in largestNumber()
int Compare(string X, string Y)
{
    // first append Y at the end of X
    string XY = X.append(Y);
 
    // then append X at the end of Y
    string YX = Y.append(X);
    // Now see which of the two formed numbers is greater
   if (XY > YX)
   {
     return 1;
   }
   else
   {
     return 0;
   }
    
}
 
// This function prints the largest number
void largestNumber(string  arr[], int n)
{
    // Sort the numbers using library sort funtion.
    sort(arr, arr+n, Compare);
   
   //printing the sorted array, which is the largest number
    for (int i=0; i < n ; i++ )
        cout << arr[i];
}
 
int main()
{  
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;	
    string arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
    largestNumber(arr, n);
	cout<<endl;
	}
   return 0;
}
