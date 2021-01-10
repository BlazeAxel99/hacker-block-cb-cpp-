/*


Replace all occurrences of pi with 3.14
Input Format

Integer N, no of lines with one string per line
Constraints

0 < N < 1000
0 <= len(str) < 1000
Output Format

Output result one per line
Sample Input

3
xpix
xabpixx3.15x
xpipippixx

Sample Output

x3.14x
xab3.14xx3.15x
x3.143.14p3.14xx

Explanation

All occurrences of pi have been replaced with "3.14".
*/
#include<iostream>
using namespace std;

char out[1000000];
int k=0;
void replace(char *a,int i){
    
    if(a[i]=='\0'){
        out[k++]='\0';
        return;
    }
    if(a[i]=='p'&&a[i+1]=='i'){
        out[k++]='3';
        out[k++]='.';
        out[k++]='1';
        out[k++]='4';
        replace(a,i+2);
    }
    else{
        out[k++]=a[i];
        replace(a,i+1);
    }
   
}
int main() {
    int t;
    cin>>t;
    while(t--){
    char a[10000];
    cin>>a;
    replace(a,0);
    cout<<out<<endl;
    k=0;
    }
	return 0;
}
