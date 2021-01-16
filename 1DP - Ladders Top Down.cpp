#include<iostream>
using namespace std;

int ltd(int n,int k,int dp[]){
    if(n==0){
        return 1;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    int ways = 0;
    for(int i=1;i<=k;i++){
            if(n-i>=0){
        ways+=ltd(n-i,k,dp);
            }
       
    } return dp[n] = ways;
}

int main() {
    int n,k;
    int dp[100]={0};
    cin>>n>>k;
    cout<<ltd(n,k,dp);

    return 0;
}
