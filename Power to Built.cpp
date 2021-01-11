/*


Implement pow(x, n) % d.

In other words, given x, n and d,

find (xn % d)
Input Format

The First Line contains an Integer T, for the number of test cases. Next Line contains 3 Integers x, n and d separated by space.
Constraints

Note that remainders on division cannot be negative.

In other words, make sure the answer you return is non negative.
Output Format

Print the answer caculated for each test case separated by a new Line.
Sample Input

1
2 3 3

Sample Output

2

*/
#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while(t--){
		int a,b,c,n,nu;
		cin>>a>>b>>c;
        n=pow(a,b);
		nu = n%c;
		cout<<nu<<endl;

	}
	return 0;
}
