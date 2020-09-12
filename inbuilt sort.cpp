#include<iostream>
#include<algorithm>
using namespace std;
// use comp for dec order else remove it from the code.
bool comp(int a,int b){
return a>b;

}

int main(){
//Write your code here
int n, a[1000];

cin>>n;
for(int i=0;i<n;i++){

cin>>a[i];
}
sort(a,a+n,comp);
for(int i=0;i<n;i++){

cout<<a[i]<<",";
}

return 0;
}
