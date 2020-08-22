#include<iostream>
using namespace std;
int main(){
int N;
float incri =1.0;
float ans=0;
cin>>N;
while(ans*ans<=N){
ans=ans+incri;

}
ans= ans- incri;
cout<<ans;
}
