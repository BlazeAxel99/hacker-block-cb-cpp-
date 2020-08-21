#include<iostream>
using namespace std;
int main(){
//Write your code here
  int n, no,q;
  cin>>n;
  while(n>0){
  int p=1;
  int sum=0;

    cin>>no;
    while(no>0){

        q=no%10;
        sum=sum+(p*q);
        no=no/10;
        p=p*2;

    }
      cout<<sum<<endl;
      n=n-1;
}
      return 0;
}
