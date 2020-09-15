#include<iostream>
using namespace std;
int main(){
//Write your code here
int n,a[1000];
int cs =0,ms=0;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];

}
//kadane's algo
for(int i=0;i<n;i++)
{
cs+=a[i];
if(cs<0){
cs=0;

}
ms=max(cs,ms);

}
cout<<ms;
return 0;
}
