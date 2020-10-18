/*
A Boston number is a composite number, the sum of whose digits is the sum of the digits of its prime factors obtained as a result of prime factorization (excluding 1 ). The first few such numbers are 4,22 ,27 ,58 ,85 ,94 and 121 . For example, 378 = 2 × 3 × 3 × 3 × 7 is a Boston number since 3 + 7 + 8 = 2 + 3 + 3 + 3 + 7. Write a program to check whether a given integer is a Boston number.

Input Format
There will be only one line of input:N , the number which needs to be checked.

Constraints
1 < N < 2,147,483,647 (max value of an integer of the size of 4 bytes)

Output Format
1 if the number is a Boston number. 0 if the number is a not Boston number.

Sample Input
378
Sample Output
1
Explanation
Self Explanatory

*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
bool isPrime(ll n){
    
    if(n<2)
    return false;
    if(n==2||n==3)
    return true;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
    
}

ll sum_of_digits(ll n){
    ll sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}


bool Is_Boston(ll n){
    int arr[1000000];
    int k=0;
    ll ans=0;
    
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
           arr[k++]=i; 
           arr[k++]=n/i;
        }
    }
    
    
    for(int i=0;i<k;i++){
        if(isPrime(arr[i])){
            int a=arr[i];
            while(n%a==0){
                ans+=sum_of_digits(arr[i]);
                a=a*arr[i];
            }
        }
    }
    if(sum_of_digits(n)==ans)
    return true;
    return false;
}

int main() {
    cin>>n;
    
    cout<<Is_Boston(n)<<endl;
	return 0;
}
