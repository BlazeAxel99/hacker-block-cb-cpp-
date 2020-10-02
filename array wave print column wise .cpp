/*
Take as input a two-d array. Wave print it column-wise.
Input Format

Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).
Constraints

Both M and N are between 1 to 10.
Output Format

All M * N integers seperated by commas with 'END' wriiten in the end(as shown in example).
Sample Input

4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44

Sample Output

11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END

*/





#include<iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
//Write your code here
int a[m][n];


for (int row=1;row<=m;row++){
for(int col= 1;col<=n;col++){
 cin>>a[row][col];


}

}
//wave
for(int col= 1;col<=n;col++){
if(col%2!=0){
for (int row=1;row<=m;row++){

cout<<a[row][col]<<", ";
}

}
else {
for (int row=m;row>0;row--){
cout<<a[row][col]<<", ";
}

}
}
cout<<"END";
return 0;
}
