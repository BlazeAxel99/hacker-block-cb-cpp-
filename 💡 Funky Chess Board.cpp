/*


A knight is a piece used in the game of chess. The chessboard itself is square array of cells. Each time a knight moves, its resulting position is two rows and one column, or two columns and one row away from its starting position. Thus a knight starting on row r, column c – which we’ll denote as (r,c) – can move to any of the squares (r-2,c-1), (r-2,c+1), (r-1,c-2), (r-1,c+2), (r+1,c-2), (r+1,c+2), (r+2,c-1), or (r+2,c+1). Of course, the knight may not move to any square that is not on the board.

Suppose the chessboard is not square, but instead has rows with variable numbers of columns, and with each row offset zero or more columns to the right of the row above it. The figure to the left illustrates one possible configuration. How many of the squares in such a modified chessboard can a knight, starting in the upper left square (marked with an asterisk), not reach in any number of moves without resting in any square more than once? Minimize this number.

Imgur

https://i.imgur.com/05Pl2xt.png
If necessary, the knight is permitted to pass over regions that are outside the borders of the modified chessboard, but as usual, it can only move to squares that are within the borders of the board.
Input Format

First line contains an integer n, representing the side of square of chess board. The next n line contains n integers separated by single spaces in which jjth integer is 1 if that cell(i,j) is part of chessboard and 0 otherwise.
Constraints

The maximum dimensions of the board will be 10 rows and 10 columns. That is, any modified chessboard specified by the input will fit completely on a 10 row, 10 column board.
Output Format

Print the minimum number of squares that the knight can not reach.
Sample Input

3
1 1 1
1 1 1
1 1 1

Sample Output

1


*/
#include<bits/stdc++.h>

using namespace std;
int n;
int check[10][10];
int minimum = 100;

void updateMin(int **m) {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            if (m[i][j] == 1 && check[i][j]  != -1)
                count++;
        }
    }
    minimum = min(minimum, count);
}

void traverse( int ** m, int row, int col ) {
    //base cases
    if (row >= n || col >= n || row < 0 || col < 0)
        return;
    if (check[row][col] == -1 || m[row][col] == 0)
        return;

    //marking visited boxes with -1;
    check[row][col] = -1;
    updateMin(m);

    //recursive cases
    traverse( m,  row - 2,  col - 1 );
    traverse( m,  row - 2,  col + 1 );

    traverse( m,  row - 1,  col - 2 );
    traverse( m,  row - 1,  col + 2 );

    traverse( m,  row + 1,  col - 2 );
    traverse( m,  row + 1,  col + 2 );

    traverse( m,  row + 2,  col - 1 );
    traverse( m,  row + 2,  col + 1 );

    check[row][col] = 0;
}

/*
(r-2,c-1), (r-2,c+1), (r-1,c-2), (r-1,c+2), (r+1,c-2), (r+1,c+2), (r+2,c-1), or (r+2,c+1).
*/
int main() {

    cin >> n;
    int **m = new int*[n];
    for (int i = 0; i < n; i++) {
        m[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];

    memset(check, 0, sizeof(check));
    traverse(m, 0, 0);
    
    cout << minimum << endl;
    return 0;
}
