/*


Take as input str, a string. Write a recursive function which returns all the words possible by rearranging the characters of this string which are in dictionary order smaller than the given string. The output strings must be lexicographically sorted.
Input Format

Single line input containing a string
Constraints

Length of string <= 25
Output Format

Display all the words which are in dictionary order smaller than the string entered in a new line each. The output strings must be sorted.
Sample Input

cab

Sample Output

abc
acb
bac
bca

Explanation

The possible permutations of string "cab" are "abc" , "acb" ,"bac" , "bca" , "cab" and "cba" . Only four of them are lexicographically less than "cab". We print them in lexicographical order.
*/
#include<bits/stdc++.h>
using namespace std;
vector<string>result;
void permute(string s,string output,int i)
{
	//base case
	if(s[i] == '\0')
    {
	   if(s<output)
       {
          result.push_back(s);
       }
       return;
	}
	//to find all the possible words
	for(int j=i; s[j] != '\0'; j++){
		swap(s[i],s[j]);
		//recursive case
		permute(s,output,i+1);
	}
}

int main()
{
	string s;
	cin>>s;
    string output;
    output=s;
	permute(s,output,0);
    sort(result.begin(),result.end());//Sorting the outputs
    for(int i=0;i<result.size();i++)
    cout<<result[i]<<endl;
	return 0;
}
