/*


Given 2 sorted linked lists , merge the two given sorted linked list and print the final Linked List.
Input Format

First Line contains T the number of test cases.
For each test case :
Line 1 : N1 the size of list 1
Line 2 : N1 elements for list 1
Line 3 : N2 the size of list 2
Line 4 : N2 elements for list 2
Constraints

1 <= T <= 1000
0<= N1, N2 <= 10^6
-10^7 <= Ai <= 10^7
Output Format

For each testcase , print the node data of merged linked list.
Sample Input

1
4
1 3 5 7
3
2 4 6

Sample Output

1 2 3 4 5 6 7 

Explanation

The two lists after merging give the sorted output as [1,2,3,4,5,6,7] .
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
    while(t--){
		int a,b,e,k,n,temp,i,j;
		int c[1000],d[1000],f[10000];
		cin>>a;
		for(int i=0;i<a;i++){
			cin>>c[i];
		}
		cin>>b;
		for(int i=0;i<b;i++){
			cin>>d[i];
		}
	
		e=a+b;
		for(int i=0;i<a;i++){
			f[i]=c[i];
		}
		for(int i=0,k=a;k<e&&i<b;i++,k++){
			f[k]=d[i];
		}
		     for(i=0; i<e; i++)
    {
        for(j=i+1; j<e; j++)
        {
            //If there is a smaller element found on right of the array then swap it.
            if(f[j] < f[i])
            {
                temp = f[i];
                f[i] = f[j];
                f[j] = temp;
            }
        }
    }
		for(int i=0;i<e;i++){
			cout<<f[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
