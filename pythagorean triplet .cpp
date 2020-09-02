#include<iostream>

using namespace std;
int main() {
	long long int N,a,b,c;
	cin>>N;
	 if(N==1||N==0)
            cout<<"-1";
	else if(N%2==0){
     a= (N*N-4)/4;
	 b=N;
	 c=(N*N+4)/4;
     cout<<a<<" "<<c;
	}
	else{
		a=N;
		b=(N*N -1)/2;
		c= (N*N+1)/2;
		cout<<b<<" "<<c;
	}

	return 0;
}
