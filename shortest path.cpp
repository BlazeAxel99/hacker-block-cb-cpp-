#include<iostream>
using namespace std;
int main(){
 int x=0,y=0;

char ch;
ch =cin.get();

while(ch!='\n'){
if(ch=='n'or ch=='N'){
y++;
}
if(ch=='s'or ch=='S'){
y--;
}
if(ch=='e'or ch=='E'){
x++;

}
if(ch=='w'or ch=='W'){
x++;
}
ch=cin.get();
}
cout<<x<<" "<<y<<endl;
}
