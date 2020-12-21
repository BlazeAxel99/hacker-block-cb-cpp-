/*


Take as input x and n, two numbers. Write a function to calculate x raise to power n. Target complexity is O(logn). NOTE: Try both recursive and bitmasking approach.
Input Format

Enter the number N and its power P
Constraints

None
Output Format

Display N^P
Sample Input

2
3

Sample Output

8

*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int x,y,z;
	cin>>x>>y;
      z=pow(x,y);
	  cout<<z;
	return 0;
}
