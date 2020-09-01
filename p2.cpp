#include<iostream>
using namespace std;
int main(){
//Write your code here
int n;
cin>>n;
for(int i=1;i<=n;i++){
int val=i%2==0?1:0;
for(int cnt=1;cnt<=i;cnt++){
cout<<val;
val=1-val;
}
cout<<endl;
}
return 0;
}
