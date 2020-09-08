/*
Take N as input. For a value of N=7, we wish to draw the following pattern :

                            1 
                        2 1   1 2 
                    3 2 1       1 2 3 
                4 3 2 1           1 2 3 4 
                    3 2 1       1 2 3 
                        2 1   1 2 
                            1 
Input Format
Take N as input.

Constraints
N is odd number.

Output Format
Pattern should be printed with a space between every two values.

Sample Input
7
Sample Output
            1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1 
Explanation
Catch the pattern and print it accordingly.

*/


#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=(n+1)/2;i++){
        for(int j=1;j<=(2*(n+1-2*i));j++){
            cout<<" ";
        }
        for(int j = i;j>0;j--){
            cout<<j<<" ";
        }
        
        for(int j=1;j<(4*(i-1)-1);j++){
            cout<<" ";
        }
        if(i>1){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
    }
        cout<<endl;
    }
    for(int i=n/2;i>0;i--){
         for(int j=1;j<=(2*(n+1-2*i));j++){
            cout<<" ";
        }
        for(int j = i;j>0;j--){
            cout<<j<<" ";
        }
        
        for(int j=1;j<(4*(i-1)-1);j++){
            cout<<" ";
        }
        if(i>1){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        }
        cout<<endl;
    }
	return 0;
}
