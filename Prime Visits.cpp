/*


PMO gives two random numbers a & b to the Prime Minister. PM Modi wants to visit all countries between a and b (inclusive) , However due to shortage of time he can't visit each and every country , So PM Modi decides to visit only those countries,for which country number has two divisors. So your task is to find number of countries Mr. Modi will visit.

Input Format

The first line contains N , no of test cases. The next N lines contain two integers a and b denoting the range of country numbers.
Constraints

a<=1000000 & b<=1000000.
N<=1000
Output Format

Output contains N lines each containing an answer for the test case.
Sample Input

2
1 10
11 20

Sample Output

4
4

Explanation

PM Modi chooses countries with numbers 2,3,5 and 7 for the first testcase.
For the second testcase , he chooses countries with numbers 11,13,17 and 19.

*/

int main()
{
    int sieve[1000001]={0};
    sieve[0]=sieve[1]=1;
    for(int i=2;i*i<=1000000;i++)
        if(!sieve[i])
            for(int j=i*i;j<=1000000;j+=i)
                sieve[j]=1;
    for(int i=0;i<=1000000;i++)
        if(sieve[i]==0)
            sieve[i]=1;
        else
            sieve[i]=0;
    for(int i=1;i<=1000000;i++)
        sieve[i]+=sieve[i-1];
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{	
		int a,b;
		cin>>a>>b;
		if(a!=0)
		    cout<<sieve[b]-sieve[a-1]<<endl;
		 else
		    cout<<sieve[b]<<endl;
	}
	return 0;	
}
