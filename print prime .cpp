/*


Take N as input. Print all prime numbers from 2 to N.
Input Format

Constraints

1 <= N <= 1000
Output Format

Sample Input

10

Sample Output

2
3
5
7

Explanation

Each output should be on separate line. A prime number is that number which is divisible by one or itself.
*/
#include<iostream>
using namespace std;
void prime(int n){
	int ans;

	if(n==2||n==3){		
		cout<<n<<endl;
	}
	
	else{
	 for(int i=2;i<n;i++){
		   
		   ans = n%i;
		   if(ans==0){
			   break;
		   }
	 }
	 if(ans!=0){
		 cout<<n<<endl;
	 }
	}

}
int main() {
	 int n;
	 cin>>n;
	 if(n<=1){
		 cout<<"-1";
	 }
	 else{
	 for(int i=2;i<=n;i++){
         prime(i);
	 }
	 }
	return 0;
}
