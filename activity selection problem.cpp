/*


You are given n activities (from 0 to n-1) with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.
Input Format

The first line consists of an integer T, the number of test cases. For each test case, the first line consists of an integer N, the number of activities. Then the next N lines contain two integers m and n, the start and end time of each activity.
Constraints

1<=t<=50
1<=n<=10000
1<=A[i]<=100
Output Format

For each test case find the maximum number of activities that you can do.
Sample Input

1 
3
10 20
12 15
20 30

Sample Output

2

Explanation

Person can only do 0th and 2nd activities.


*/
#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<int, int>&x, const pair<int, int>&y){
    return x.second < y.second;
}

int solve(vector<pair<int,int>>v){
    vector<pair<int,int>>::iterator itr1;
    vector<pair<int,int>>::iterator itr2;
    int cnt = 1;
    for(itr1 = v.begin(), itr2 = v.begin()+1; itr2 != v.end(); ++itr2){
        
        if(itr2->first >= itr1->second){
            itr1 = itr2;
            cnt++;
        }
    }
    return cnt;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>>v;
		int s, e;
		for(int i = 0; i < n; i++){
			cin>>s>>e;
			v.push_back(make_pair(s, e));
		}
		sort(v.begin(), v.end(), comp);

        ///vector<pair<int,int>>:: iterator itr;
        /*
        for(itr = v.begin(); itr != v.end(); ++itr){
            cout<<itr->first<<" "<<itr->second<<endl;
        }
        */
        cout<<solve(v)<<endl;
	}
    return 0;
}
