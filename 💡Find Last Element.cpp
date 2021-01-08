/*


Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns the last index at which M is found in the array and -1 if M is not found anywhere. Print the value returned.
Input Format

There will be three lines of input:

    N - the size of the array
    N space separated integers that make up the array
    M

Constraints

1 < N < 1000
-10^9 < i,M < 10^9 , where i is any number within the array
Output Format

For each case, print the integer value of the last index that M is found at within the given array.
If it is not found, print '-1' (without the quotes).
Sample Input

7
86 -16 77 65 45 77 28
77

Sample Output

5

Explanation

Last occurence of 77 is found at index = 5.
*/
#include <bits/stdc++.h> 
using namespace std; 
  
// Comparator structure for finding 
// index of element with value K 
struct comparator { 
  
    int elem; 
    comparator(int const& i) 
        : elem(i) 
    { 
    } 
  
    bool operator()(int const& i) 
    { 
        return (i == elem); 
    } 
}; 
  
// Function to find the last index of 
// the given number K 
int findIndex(int arr[], int N, int K) 
{ 
  
    // Reverse the given array arr[] 
    reverse(arr, arr + N); 
  
    // Find the first occurence of K 
    // in this reversed array 
    auto it = find_if(arr, arr + N, 
                      comparator(K)); 
  
    // If the element is not present 
    // then return "-1" 
    if (it == arr + N) { 
        return -1; 
    } 
  
    // Else return the index found 
    return (N - distance(arr, it) - 1); 
} 
  
// Driver Code 
int main() 
{ 
    int t;
	cin>>t;
	int arr[t];
    for(int i=0;i<t;i++){
		cin>>arr[i];
	}
    int N = sizeof(arr) / sizeof(arr[0]); 
    int K; 
	cin>>K;
  
    // Function call 
    cout << findIndex(arr, N, K); 
  
    return 0; 
} 
