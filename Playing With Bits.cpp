/*


Prateek Bhayia likes to play with bits. One day Prateek bhayia decides to assign a task to his student Sanya. You have help Sanya to complete this task. Task is as follows - Prateek Bhayia gives Q queries each query containing two integers a and b. Your task is to count the no of set-bits in for all numbers between a and b (both inclusive)
Input Format

Read Q - No of Queries, Followed by Q lines containing 2 integers a and b.
Constraints

Q,a,b are integers.
Output Format

Q lines, each containing an output for your query.
Sample Input

2
1 1
10 15

Sample Output

1
17

*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,r,s,sum=0,sc;
	cin>>t;
	while(t--){
       cin>>r>>s;
	   if(r==s){
		   cout<<__builtin_popcount(r)<<endl;;
	   }
	   else{
	   for(int i=r;i<=s;i++){

		   sc = __builtin_popcount(i);
		   sum+= sc;
           
	   }
	   cout<<sum<<endl;
	   sum=0;
	   }
	}
	return 0;
}
