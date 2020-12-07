/*


Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,…,xN (0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?
Input Format

First line contains N and C, separated by a single space, representing the total number of stalls and number of cows respectively. The next line contains N integers containing the indexes of stalls.
Constraints

2 <= N <= 100,000
0 <= xi <= 1,000,000,000
2 <= C <= N
Output Format

Print one integer: the largest minimum distance.
Sample Input

5 3
1 2 8 4 9

Sample Output

3

Explanation

Problem Credits - (Spoj)[http://www.spoj.com/problems/AGGRCOW/]

*/

#include<bits/stdc++.h>
using namespace std;

	int N,C;

int check(int num,int stalls[])
{
	int cows=1,pos=stalls[0];
	for (int i=1; i<N; i++)
	{
		if (stalls[i]-pos>=num)
		{
			pos=stalls[i];
			cows++;
			if (cows==C)
				return 1;
		}
	}
	return 0;
}

int binarySearch(int stalls[])
{
	int start=0,end=stalls[N-1],max=-1;
	while (end>start)
	{
		int mid=(start+end)/2;
		if (check(mid,stalls)==1)
		{
			if (mid>max)
				max=mid;
			start=mid+1;
		}
		else
			end=mid;
	}
	return max;
}

int main()
{
	int t;
	t=1;

	while (t--)
	{
		cin>>N>>C;
		
		int stalls[N];
		
		for (int i=0; i<N; i++)
			cin>>stalls[i];
		
		sort(stalls,stalls+N);
		
		int k=binarySearch(stalls);
		
		cout<<k;
	}
	return 0;
	
}
