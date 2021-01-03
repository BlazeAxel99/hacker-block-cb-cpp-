/*


Prateek recently graduated from college. To celebrate, he went to a candy shop and bought all the candies. The total cost was a number upto which there are n prime numbers (starting from 2). Since Prateek wants to minimize his cost, he calls you to help him find the minimum amount that needs to be paid. Being a student of Prateek bhaiya it is now your job to help him out :)
Input Format

First line contains a single integer denoting the number of test cases T. Next T lines contains a single integer N, denoting the number of primes required.
Constraints

T <= 10000

It is guaranteed that the answer does not exceed 10^6.
Output Format

Print the minimum cost that needs to be paid.
Sample Input

2
5
1

Sample Output

11
2

Explanation

In the first case there are 5 primes upto 11(2,3,5,7,11).

*/
#include <bits/stdc++.h>
using namespace std;
 
// initializing the max value
#define MAX_SIZE 1000005
 
// Function to generate N prime numbers using
// Sieve of Eratosthenes
void SieveOfEratosthenes(vector<int>& primes)
{
    // Create a boolean array "IsPrime[0..MAX_SIZE]" and
    // initialize all entries it as true. A value in
    // IsPrime[i] will finally be false if i is
    // Not a IsPrime, else true.
    bool IsPrime[MAX_SIZE];
    memset(IsPrime, true, sizeof(IsPrime));
 
    for (int p = 2; p * p < MAX_SIZE; p++) {
        // If IsPrime[p] is not changed, then it is a prime
        if (IsPrime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (int i = p * p; i < MAX_SIZE; i += p)
                IsPrime[i] = false;
        }
    }
 
    // Store all prime numbers
    for (int p = 2; p < MAX_SIZE; p++)
        if (IsPrime[p])
            primes.push_back(p);
}
 
// Driver Code
int main()
{     int t,n,m;
cin>>t;
    // To store all prime numbers
    vector<int> primes;
 
    // Function call
    SieveOfEratosthenes(primes);
   while(t--){
	   cin>>n;
	   m=n-1;
	   cout<<primes[m]<<endl;
   }
    
 
    return 0;
}
