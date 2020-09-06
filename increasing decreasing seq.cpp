/*
Given an array S of size N , check if it is possible to split sequence into two sequences -
s1 to si and si+1 to sN such that first sequence is strictly decreasing and second is strictly increasing. Print true/false as output.

Input Format
First line contains a single integer N denoting the size of the input.
Next N lines contain a single integer each denoting the elements of the array S.

Constraints
0 < N < 1000 Each number in sequence S is > 0 and < 1000000000

Output Format
Print boolean output - "true" or "false" defining whether the sequence is increasing - decreasing or not.

Sample Input
5 
1 
2 
3 
4 
5
Sample Output
true
Explanation
Carefully read the conditions to judge which all sequences may be valid. Don't use arrays or lists.
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int e,p,inc=0;
    cin>>p;
    n--;
    while(n>0){
        cin>>e;
        if(e==p){
            cout<<"false";
            return 0;
        }
        if(e<p && inc==0){
            n--;
            p=e;
            continue;
        }
        else if(e<p && inc==1){
            cout<<"false";
            return 0;
        }
        else if(e>p){
            inc=1;
        }
        p=e;
        n--;
    }
    cout<<"true";
	return 0;
}
