/*


You are given a sorted but rotated array. You need to fine the index of the pivot element of the array where pivot is that element in the array which is greater than its next element and divides the array into two monotonically increasing halves.
Input Format

The first line denotes N - the size of the array. The following N lines each denote the numbers in the array.
Constraints

Output Format

Output the index of the pivot of the array.
Sample Input

5
4
5
1
2
3

Sample Output

1

Explanation

Here, 5 is the pivot element. Thus the output is 1 which is 5's index.
*/
#include<iostream>
using namespace std;
int main()
{
	//int arr[] = {6,7,1,2,3,4,5};
	//int n = sizeof(arr)/sizeof(int);
    int n;
	cin>>n;
	int arr[1000000];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int s = 0;
	int e = n-1;
	/*if (arr[0]<=arr[n-1])
	{
		cout<<"pivot not";
	}
	else
	{*/
		while(s<=e)
		{
			int m = (s+e)/2;
			if (arr[m]>arr[m+1] && m<e)
			{
				cout<<m<<" ";
				break;
			}
			 if (arr[m]<arr[m-1]&& m>s)
			{
				cout<<m-1<<" ";
                break;
                //e = m-1;
			}
			//else
            if(arr[s]>=arr[m])
			{
				//s = m+1;
                e=m-1;
			}
            else
            {
                s=m+1;
            }
		}
	return 0;
}
