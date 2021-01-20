/*



You are packing for a vacation on the sea side and you are going to carry only one bag with capacity S (1 <= S <= 1000). You also have N (1<= N <= 1000) items that you might want to take with you to the sea side. Unfortunately you can not fit all of them in the knapsack so you will have to choose. For each item you are given its size and its value. You want to maximize the total value of all the items you are going to bring. What is this maximum total value?
Input Format

On the first line you are given N and S.
Second line contains N space separated integer where ith integer denotes the size of ith item. Third line contains N space seperated integers where ith integer denotes the value of ith item.
Constraints

1 <= S,N <= 1000
Output Format

Output a single integer showing the maximum value that can be obtained by optimally choosing the items.
Sample Input

5 4
1 2 3 2 2 
8 4 0 5 3

Sample Output

13

Explanation

Total capacity = 4.
Pick size 1 with value 8 and size 2 with value 5.
*/

#include<bits/stdc++.h>
using namespace std;
using namespace std;
int knapsack(int *value,int *capacity,int i,int size,int bag_capacity,int dp[1001][1001])
{
	if(bag_capacity==0 or i==size)
	{
		return 0;
	}
	if(dp[i][bag_capacity]!=-1)
	{
		return dp[i][bag_capacity];
	}
	int option1=knapsack(value,capacity,i+1,size,bag_capacity,dp);//without taking it
	int option2=INT_MIN;
	if(bag_capacity>=capacity[i])
	{
		option2=value[i]+knapsack(value,capacity,i+1,size,bag_capacity-capacity[i],dp);
	}
	return dp[i][bag_capacity]=max(option1,option2);
}
int main() 
{
    int size,bag_capacity;
    cin>>size>>bag_capacity;
    int value[size];
    int capacity[size];
    for(int i=0;i<size;i++)
    {
        cin>>capacity[i];
    }
    for(int i=0;i<size;i++)
    {
        cin>>value[i];
    }
    int dp[1000+1][1000+1];
    for(int i=0;i<=size;i++)
    {
        for(int j=0;j<=bag_capacity;j++)
        {
            dp[i][j]=-1;
        }
    }
    cout<<knapsack(value,capacity,0,size,bag_capacity,dp);
}
