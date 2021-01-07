#include<bits/stdc++.h>

using namespace std;



void sub(char *c,char *d,int i,int j){
	
	if(c[i]=='\0'){
        d[j]=='\0';
		count++;
		cout<<d<<" ";
		
		

		return;
	}
       
	
	d[j]='\0';
   sub(c,d,i+1,j);

   d[j]=c[i];
   
	sub(c,d,i+1,j+1);


}

int main() {
	
	string s;
	getline(cin,s);
	int n = s.length();
	char c[1000];
	strcpy(c, s.c_str());
	char d[10000];
    sub(c,d,0,0);
	
	
	return 0;
};
