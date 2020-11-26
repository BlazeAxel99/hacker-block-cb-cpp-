/*


Martin’s father is a farmer. On his absence, he asked Martin to plant as many variety of crops as he could in an infinite space of land. But each variety of crop must have its own designated region separated by fences.

He had N fences with him, which are to be arranged in a non-parallel fashion. Find out the maximum variety of crops he can grow.
Input Format

The first line of input contains an integer T denoting the number of test cases.
Each test case, contains a single line, an integer N (the number of fences).
Constraints

1 ≤ T ≤ 1000
1 ≤ N ≤ 10^4
Output Format

For each test case, in a new line, print the maximum variety of crops that can be grown.
Sample Input

2
1
2

Sample Output

2
4


*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    int a[10000],b[10000];
    cin>>tt;
    for(int i=0;i<tt;i++){
        cin>>a[i];
    }
     for(int i=0;i<tt;i++){
         b[i] = (a[i]*(a[i]+1))/2 + 1;
         cout<<b[i]<<endl;
     }
}
