/*


Prateek Bhaiya decided to give 100% scholarships to the needy students by taking an admission test. However in order to avoid any losses at the institute, he came up with a solution. Coding Blocks has N students and M discount coupons. A student will get 100% waiver if he gets X discount coupons.
However in order to get more discount coupons in addition to those M , Bhaiya decided that some students who perform badly in the admission tests, need to pay additional amount equivalent to Y discount coupons, i.e. good students earn discount coupons and weak students need to pay coupons to get admission.
Find out the maximum number of students who can get 100% waiver in their admission fees.
Note : Bhaiya will try his best to give 100% discount to maximum students possible.
Input Format

The first line contains 4 integers N M X Y
Constraints

1 ≤ N,M,X,Y ≤ 10^9 ​​
Output Format

The output should contain a single integer representing the maximum number of students who can get 100% discount.
Sample Input

5 10 2 1

Sample Output

5
File 1: Since there are 5 students, and 10 available coupons, and each student needs just 2 coupons to get 100% discount, so Bhaiya already has the needed number of coupons, so all 5 students will get 100% waiver on their fees.
File 2: There are 3 students. Bhaiya will give 100% discount to 2 students using the initial number of discounts, i.e. 8 out of 10 will get used. We need atleast 2 more coupons to give discount to the third student. Now if the third student pay additional amount equivalent to Y=2 coupons, we will get a total of 4 coupons in hand, however we can not use them for giving discount as all 3 students have been considered (2 for getting discount and 1 for paying additional amount).
*/

#include<iostream>
using namespace std;
int main() {
  long long int n,m,x,y;
  cin>>n>>m>>x>>y;
  int s=0;
  int e=n;
  int mid;
  long long int finalans=0;
  while (s<=e){
    mid =(s+e)/2;
    if ((mid*x)<=m+((n-mid)*y)){
      s=mid+1;
      finalans=mid;
    }else{
      e=mid-1;
    }
  }cout<<finalans<<endl;
  
	return 0;
}
