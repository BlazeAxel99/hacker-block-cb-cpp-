#include<bits/stdc++.h>
using namespace std;
int minstep(int n,int dp[]){
    if(n==1){
            return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    int op1,op2,op3;
    op1=op2=op3=INT_MAX;
    if(n%3==0){
        op1= minstep(n/3,dp) + 1; // regarding +1 in code (cause we need 1 step to go from current problem to next sub problem)
    }
    if(n%2==0){
        op2=minstep(n/2,dp) + 1;

    }
    op3= minstep(n-1,dp) + 1 ;
    int ans= min(min(op1,op2),op3);
    return dp[n]=ans;
}

int main(){
    int n;
    cin>>n;
    int dp[1000]={0};
    cout<<minstep(n,dp);
}
