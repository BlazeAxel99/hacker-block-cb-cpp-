/*


Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars.
https://prismoskills.appspot.com/lessons/Arrays/Histogram.png

Input Format

First line contains a single integer N, denoting the number of bars in th histogram.
Next line contains N integers, ith of which, denotes the height of ith bar in the histogram.
Constraints

1<=N<=10^6
Height of each bar in histogram <= 10^9
Output Format

Output a single integer denoting the area of the required rectangle.
Sample Input

5
1 2 3 4 5

Sample Output

9

Explanation

The largest rectangle can be obtained of breadth=3 and length=3. Its starting index is 2 and ending index is 4 and it has a height of 3. Hence area = 3*3 = 9

*/

#include<bits/stdc++.h>
using namespace std;
 

long long int getMaxArea(long long int hist[], long long int n)
{
    
    stack<long long int> s;
 
    long long int max_area = 0; 
    long long int tp;  
    long long int area_with_top; 
                       
 
    long long int i = 0;
    for(long long int i=1;i<n;i++){
        
        
        while(!s.empty()&&hist[s.top()]>hist[i]){
            int top=s.top();
            s.pop();
            area_with_top=(s.empty())?hist[top]*i:hist[top]*(i-s.top()-1);
            if(max_area<area_with_top)
            max_area=area_with_top;
        }
        s.push(i);
    }
    long long int size=s.size();
    while (s.empty() == false)
    {
        long long int top=s.top();
        s.pop();
        area_with_top=hist[top]*(size-s.size());
        if(max_area<area_with_top)
        max_area=area_with_top;
    }
 
    return max_area;
}
 
int main(){
    long long int n;
    cin>>n;
    
    long long int hist[n];
    for(long long int i=0;i<n;i++){
        cin>>hist[i];
    }
    cout<<getMaxArea(hist, n);
}
