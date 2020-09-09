#include<iostream>
#include<math.h>
using namespace std;

int main(){

long long int n,fact=1,res,p=1,sum=0;
cin>>n;

/*for(int i=2;i<=n;i++){
fact*=i;

}
cout<<fact<<endl;
*/
//Write your code here
for(int j=1;j<=n;j++){
res=pow(5,j);
p=n/res;
sum=sum+p;
if(p<0){

break;
}

}
cout<<sum;

}
