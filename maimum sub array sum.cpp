#include<iostream>
using namespace std;
int main(){

int a[1000],n,csum=0,msum=0,left,right;
cin>>n;
for(int i=0;i<n;i++){
cin>>a[i];
}
//Write your code here
for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
csum=0;
for(int k=i;k<=j;k++){
cout<<a[k]<<",";
csum+=a[k];

}
if(csum>msum){
msum=csum;
left=i;
right=j;
}
cout<<endl;
}
}
for(int k=left;k<=right;k++){
cout<<a[k]<<","<<endl;
}
cout<<"max sum:"<<msum;
return 0;
}
