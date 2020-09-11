#include<iostream>
using namespace std;


void ls(int n){
int a[1000];
int key;

for(int i=0;i<=n-1;i++){
cin>>a[i];

}
cin>>key;
for (int i=0;i<=n;i++){
if(a[i]==key) {

cout<<i;
break;
}
else if(i!=n){
continue;
}
else if(i==n){
cout<<-1;

}

}

}



int main(){

int n;
cin>>n;
ls(n);
//Write your code here

}
