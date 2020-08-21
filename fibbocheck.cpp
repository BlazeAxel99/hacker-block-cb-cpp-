#include<iostream>
#include<math.h>
using namespace std;
int main(){
     int n,s,t,u,v;
     cin>>n;
      u=(5*(n*n))-4;
      v=(5*(n*n))+4;
     s=sqrt(u);

     t=sqrt(v);


    if(((u%s==0)&&(u/s==1))||((v%t==0)&&(v/t==1))){


     cout<<"fibbo";

     }

   else{
   cout<<"not fibbo";
   }

   return 0;
}
