/*


Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.
Input Format

Enter a number N , add N more numbers
Constraints

None
Output Format

Display the Boolean result
Sample Input

4
1
2
2
1

Sample Output

true

*/

#include<iostream>
#include <climits>

using namespace std;

void reverse(){
	string str = "Pranav";

	int left = 0;
	int right = str.length() - 1;

	while(left<=right){
		char ch = str[left];
		str[left] = str[right];
		str[right] = ch;
		left++;
		right--;
	}

	cout<<str<<endl;
}

bool isPalindrome( int arr[ ] ,int i, int j) {

    if(i >= j) {
        //Check if i>=j 
        //In case of odd elements , i would become equal to j at the middle element and we can stop our search there
        //In case of even elements , i would eventually become 1 more than j and if array was palindromic till here , we need not check further and can return true
        return true ;
    }

    
    if(arr[i]!=arr[j]){
        //Return false if ith and jth integer don't match
        return false;
    }
    else {
        //Otherwise check whether the remaining array is palindromic or not
        return isPalindrome(arr,i+1,j-1) ;
    }
}

int main(){
    int n ;         //Size of array
    cin >> n;   
    int a[n];       
    for(int i=0;i<n;i++) {
        //Array input loop
        cin >> a[i];
    }
    //Call the recursive function passing 0 to i and n-1 to j
    cout<<boolalpha<<isPalindrome(a,0,n-1)<<endl;       
     return 0;
}
