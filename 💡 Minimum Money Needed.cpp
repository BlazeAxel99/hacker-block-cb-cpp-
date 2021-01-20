/*


Cody went to the market to buy some oranges for his N friends. There he finds orange wrapped in packets, with the price of i^th packet as val[i]. Now he wants to buy exactly W kg oranges, so he wants you to tell him what minimum price he should pay to buy exactly W kg oranges. Weight of i^th packet is i kg. If price of i^th packet is -1 then this packet is not available for sale. The market has infinite supply of orange packets.
Input Format

First line of input contains two space separated integers N and W, the number of friend he has and the amount of Oranges in kilograms which he should buy.

The second line contains W space separated integers in which the i^th^ integer specifies the price of a ‘i’kg apple packet. A value of -1 denotes that the corresponding packet is unavailable
Constraints

1 <= N,W,val[ ] <= 10^3
Output Format

Output a single integer denoting the minimum price Code should pay to get exactly W kg oranges. Else print -1 if it is not possible to fill the bag.
Sample Input

5 5
1 2 3 4 5

Sample Output

5


*/
#include<bits/stdc++.h>
using namespace std;
#include <climits>
#include <vector>
#include <cmath>
#define ll long long
#define INF 100000000
using namespace std;

ll findMinCost(vector<int> &cost, vector<int> &weight, int n, int s)
{
    ll dp[s+1];
    dp[0]=0;
    for(int i=1;i<=s;i++){
        dp[i]=INF;
        for(int j=0;j<n;j++){
            if(weight[j]<=i){
                dp[i]=min(dp[i],dp[i-weight[j]]+cost[j]);
            }
        }
    }
    return dp[s]==INF?-1:dp[s];
}

int main()
{
    int n, s;
    cin >> n >> s;

    vector<int> cost;
    vector<int> weight;

    for (int i = 0; i < s; i++)
    {
        int currcost;
        cin >> currcost;
        if (currcost != -1)
        {
            cost.push_back(currcost);
            weight.push_back(i + 1);
        }
    }
    cout << findMinCost(cost, weight, cost.size(), s) << endl;
}
