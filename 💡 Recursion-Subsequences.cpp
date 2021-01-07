/*


Take as input str, a string. We are concerned with all the possible subsequences of str. E.g.

a. Write a recursive function which returns the count of subsequences for a given string. Print the value returned.

b. Write a recursive function which prints all possible subsequences for a “abcd” has following subsequences “”, “d”, “c”, “cd”, “b”, “bd”, “bc”, “bcd”, “a”, “ad”, “ac”, “acd”, “ab”, “abd”, “abc”, “abcd”.given string (void is the return type for function).
Note: Use cin for input for C++
Input Format

Enter a string
Constraints

None
Output Format

Print all the subsequences in a space separated manner and isplay the total no. of subsequences.
Sample Input

abcd

Sample Output

 d c cd b bd bc bcd a ad ac acd ab abd abc abcd 
16

Explanation

Print all possible subsequences of the given string.
*/

#include<bits/stdc++.h>

using namespace std;




void printsubseq(string q, string ans) {

		if (q.length() == 0) {
			cout<<ans<<" ";
			return;
		}

		char ch = q[0];
		string ros = q.substr(1);

		printsubseq(ros, ans);

		printsubseq(ros, ans + ch);

	}

int subseq(string q, string ans) {

		if (q.length() == 0) {
			// System.out.print(ans + " ");
			return 1;
		}

		char ch = q[0];
		string ros = q.substr(1);

		int count = 0;
		count += subseq(ros, ans);

		count += subseq(ros, ans + ch);

		return count;

	}

int main() {
    string a;
    cin>>a;

    
    printsubseq(a,"");
	cout<<endl;
    cout<<subseq(a,"")<<endl;
    return 0;
    
}
