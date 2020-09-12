/*
Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *
Input Format
Constraints
0 < N < 10 (where N is an odd number)

Output Format
Sample Input
5
Sample Output

for img run code.


Explanation
Each '*' is separated from other by a tab.
*/




#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int s1=1,s2=n-2;
    for(int i=1;i<=n;i++){
        if(i ==1 || i==n)
            for(int j=1;j<=n;j++)
                cout<<"*\t";
        else{
            if(i<=n/2){
                for(int j=n/2;j>=i-1;j--){
                    cout<<"*\t";
                }
                for(int j=1;j<=s1;j++)
                    cout<<" \t";
                s1+=2;
                for(int j=n/2;j>=i-1;j--){
                    cout<<"*\t";
                }
            }
            else{
                for(int j=n/2;j<i;j++)
                    cout<<"*\t";
                for(int j=1;j<=s2;j++)
                    cout<<" \t";
                s2-=2;
                for(int j=n/2;j<i;j++)
                    cout<<"*\t";
            }
        }
        cout<<endl;
    }
    

	return 0;
}
