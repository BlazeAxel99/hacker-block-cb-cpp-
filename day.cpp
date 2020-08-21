#include<iostream>

using namespace std;

int main()
{
int num1,num2,result;
char op;
cout<<"enter first num:";
cin>>num1;
cout<<"enter op:";
cin>>op;
cout<<"enter second num:";
cin>>num2;

if (op=='+')
{
result= num1+num2;

}
if (op=='-')
{
result= num1-num2;

}
if (op=='*')
{
result= num1*num2;

}
if (op=='/')
{
result= num1/num2;

}

return result;
}
