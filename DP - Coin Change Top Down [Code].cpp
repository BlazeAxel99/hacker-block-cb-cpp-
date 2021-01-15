#include<bits/stdc++.h>
using namespace std;
 int mincoins(int n,int coin[],int T,int dp[] ){  //types of coint T


     if(n==0){
         return 0;
     }
     if(dp[n]!=0){
         return dp[n];
     }
     int ans = INT_MAX;
     for(int i=0;i<T;i++){
         if(n-coin[i]>=0){
         int subprob = mincoins(n-coin[i],coin,T,dp);
         ans = min(ans,subprob+1);
     }
     }
     dp[n]=ans;
     return ans;
 }

 int main(){
     int n = 15;
     int coin[]={1,7,10};
     int dp[100]={0};
     int T = sizeof(coin)/sizeof(int);
     cout<<mincoins(n,coin,T,dp);
 }
