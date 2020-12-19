/*


Given a string containing alphanumeric characters, calculate sum of all numbers present in the string.
Input Format

First line contains the number of testcases.

For each testcase, input a string
Constraints

1 <= T <= 100
1 <= Length of string <= 10000
Output Format

Integer output for each testcase in a new line
Sample Input

1
1abc23

Sample Output

24

Explanation

For 1abc23,
1 + 23 = 24
*/
// C++ program to calculate sum of all numbers present 
// in a string containing alphanumeric characters 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to calculate sum of all numbers present 
// in a string containing alphanumeric characters 
int findSum(string str) 
{ 
    // A temporary string 
    string temp = ""; 
  
    // holds sum of all numbers present in the string 
    int sum = 0; 
  
    // read each character in input string 
    for (char ch : str) { 
        // if current character is a digit 
        if (isdigit(ch)) 
            temp += ch; 
  
        // if current character is an alphabet 
        else { 
            // increment sum by number found earlier 
            // (if any) 
            sum += atoi(temp.c_str()); 
  
            // reset temporary string to empty 
            temp = ""; 
        } 
    } 
  
    // atoi(temp.c_str()) takes care of trailing 
    // numbers 
    return sum + atoi(temp.c_str()); 
} 
  
// Driver code 
int main() 
{ int t;
cin>>t;
while(t--){
string str;
cin>>str;
 cout << findSum(str)<<endl; 
}
}
