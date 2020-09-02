
#include<iostream>
#include<cmath>
using namespace std;
int cnt=0;
bool isArmstrong(int Number){
    int temp, sum = 0;
    temp = Number;
    while(temp > 0){
        sum += pow((temp % 10), cnt);  //////// cnt instead of 3 where cnt is the number of digits
        temp /= 10;
    }
    if(sum == Number)
        return true;
    else
        return false;
}
int main(){
    int number;
    cin >> number;
    int nn=number;
    while(nn)  /////////////counting number of digits
    {
        cnt++;
        nn/=10;
    }
    if(isArmstrong(number))
        cout << "true";
    else
        cout << "false";
    return 0;
}
