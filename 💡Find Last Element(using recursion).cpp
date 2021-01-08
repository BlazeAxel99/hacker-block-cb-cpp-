
#include<bits/stdc++.h>

using namespace std;

int lastIndex(int input[], int size, int x, int currIndex){
    if(currIndex== size){
        return -1;
    }

    int index = lastIndex(input,size,x,currIndex+1);
    
    if(index == -1 && input[currIndex] == x){
        return currIndex;
    }
    else{
        return index;
    }
}

int main(){
    int t;
	cin>>t;
	int arr[t];
    for(int i=0;i<t;i++){
		cin>>arr[i];
	}
    int N = sizeof(arr) / sizeof(arr[0]); 
    int K; 
	cin>>K;
    cout<<lastIndex(arr,N,K,0);

    return 0;
}
