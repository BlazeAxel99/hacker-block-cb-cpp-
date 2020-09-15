#include<iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
//Write your code here
int a[m][n];

int val=1;
for (int row=1;row<=m;row++){
for(int col= 1;col<=n;col++){
 a[row][col]=val;
 val++;
cout<<a[row][col]<<"    ";
}
cout<<endl;
}
//wave
for(int col= 1;col<=n;col++){
if(col%2!=0){
for (int row=1;row<=m;row++){

cout<<a[row][col]<<" ";
}

}
else {
for (int row=m;row>0;row--){
cout<<a[row][col]<<" ";
}

}
}

return 0;
}
