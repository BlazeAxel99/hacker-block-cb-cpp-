/*


Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.
Input Format

N(integer) followed by N strings.
Constraints

N<=1000
Output Format

N lines each containing one string.
Sample Input

3
bat
apple
batman

Sample Output

apple
batman
bat

Explanation

In mathematics, the lexicographic or lexicographical order (also known as lexical order, dictionary order, alphabetical order or lexicographic(al) product) is a generalization of the way words are alphabetically ordered based on the alphabetical order of their component letters.
*/
#include<bits/stdc++.h>
using namespace std;

bool compare(string a,string b){

if(a.find(b)){
	return a<b;
}
else  if(b.find(a)){
	return a>b;
}
else return a<b;

}

// void sort(string a [],int n,bool compare){

// for(int itr=1;itr<n;itr++){
// for(int i=0;i<=n-itr-1;i++){
// if(a[i]>a[i+1]){

//  		swap(a[i],a[i+1]);	
//  }}
//  }
// for(int i=0;i<n;i++){
// 	cout<<a[i]<<endl;
// }

// }
int main() {

string a[1000];

 int n;

cin>>n;

cin.get();

for(int i=0;i<n;i++){

	getline(cin,a[i]);

}

sort(a,a+n,compare);
for(int i = 0; i < n; i++)
cout << a[i] << endl;

return 0;

}
