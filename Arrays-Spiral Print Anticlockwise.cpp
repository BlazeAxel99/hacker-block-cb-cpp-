/*


Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.
Input Format

Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).
Constraints

Both M and N are between 1 to 10.
Output Format

All M * N integers separated by commas with 'END' written in the end(as shown in example).
Sample Input

4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44

Sample Output

11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END

Explanation

For spiral level anti-clockwise traversal, Go for first column-> last row ->last column-> first row and then do the same traversal for the remaining matrix .

*/
#include <iostream>
using namespace std;
int main()
{
   int m, n;
    cin >> m >> n;
    int ut, uj;
    int a[m][n];
    for (ut = 0; ut < m; ut++)
        for (uj = 0; uj < n; uj++)
            cin >> a[ut][uj];

 int i, k = 0, l = 0;

    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */

    while (k < m && l < n)
    {

        /* Print the first column from the remaining columns */
        for (i = k; i < m; ++i)
            {
                cout<<a[i][l]<<",  ";
            }
            l++;    


        /* Print the last row from the remaining rows */
        for (i = l; i < n; ++i)
            {
                cout<<a[m-1][i]<<",  ";
            }
            m--;


        /* Print the last column from the remaining columns */
        for (i = m-1; i >=k; --i)
        {
            cout<<a[i][n-1]<<",  ";
        }
        n--;



        /* Print the first row from the remaining rows */
        for (i = n-1; i >=l; --i)
        {
            cout<<a[k][i]<<",  ";
        }
        k++;
    }
    cout << "END";
    return 0;
}
