#include<iostream>
using namespace std;

void trail(int n){
int ans=0;
for(int D=5; n/D>=1;D*=5){
ans+=n/D;
}
cout<<ans;

}

int main(){

long long int n;
cin>>n;
trail(n);
//Write your code here

}
