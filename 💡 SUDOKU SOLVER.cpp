/*


You are given an N*N sudoku grid (N is a multiple of 3). Solve the sudoku and print the solution.
To learn more about sudoku, go to this link Sudoku-Wikipedia.
Input Format

First line contains a single integer N. Next N lines contains N integers each, where jth integer int ith line denotes the value at ith row and jth column in sudoku grid. This value is 0, if the cell is empty.
Constraints

N=9 Solution exists for input matrix.
Output Format

Print N lines containing N integers each, where jth integer int ith line denotes the value at ith row and jth column in sudoku grid, such that all cells are filled.
Sample Input

9
5 3 0 0 7 0 0 0 0 
6 0 0 1 9 5 0 0 0 
0 9 8 0 0 0 0 6 0 
8 0 0 0 6 0 0 0 3 
4 0 0 8 0 3 0 0 1 
7 0 0 0 2 0 0 0 6 
0 6 0 0 0 0 2 8 0 
0 0 0 4 1 9 0 0 5 
0 0 0 0 8 0 0 7 9 

Sample Output

5 3 4 6 7 8 9 1 2 
6 7 2 1 9 5 3 4 8 
1 9 8 3 4 2 5 6 7 
8 5 9 7 6 1 4 2 3 
4 2 6 8 5 3 7 9 1 
7 1 3 9 2 4 8 5 6 
9 6 1 5 3 7 2 8 4 
2 8 7 4 1 9 6 3 5 
3 4 5 2 8 6 1 7 9 

*/

#include<bits/stdc++.h>
using namespace std;

void printAns(int puzzle[][9],int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<puzzle[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isCorrect(int puzzle[][9],int n,int rowNo,int colNo,int digit){
    for(int p=0;p<=n;p++)
    {
        if(puzzle[rowNo][p]==digit)
        {
            return false;
        }
    }

    for(int p=0;p<=n;p++)    //change
    {
        if(puzzle[p][colNo]==digit)
        {
            return false;
        }
    }
    int rn=sqrt(n+1);
    int startRow=(rowNo/rn)*rn; //change
    int startCol=(colNo/rn)*rn;  //change
     for(int i=startRow;i<startRow+rn;i++){  //change
        for(int j=startCol;j<startCol+rn;j++){   //chnage
            if(puzzle[i][j]==digit){
            return false;
            }
        }
    }
    return true;  
}
bool solveSudoku(int puzzle[][9],int n,int rowNo,int colNo){
    if(rowNo==(n+1))  //change
    {   
        //cout<<"base case";
        printAns(puzzle,n);
        return true;
    }
    if(colNo==n+1)
    {
        return solveSudoku(puzzle,n,rowNo+1,0);   //change

    }

    if(puzzle[rowNo][colNo])
    {
        return solveSudoku(puzzle,n,rowNo,colNo+1);
    }
    /*
    else if(colNo>n){
        solveSudoku(puzzle,n,rowNo+1,0);  //change
    }
    */
    //else{
        for (int i=1;i<=(n+1);i++)    //change
        {  
            if(isCorrect(puzzle,n,rowNo,colNo,i))
            {
                puzzle[rowNo][colNo]=i;
                bool didsucceed=solveSudoku(puzzle,n,rowNo,colNo+1);
                if(didsucceed)
                {
                    return true;
                }
            }
        }
        puzzle[rowNo][colNo]=0;
        return false;
    //}
}
int main() {
    int n;
    cin>>n;
    int puzzle[9][9]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cin>>puzzle[i][j];
        }
    }
    solveSudoku(puzzle,n-1,0,0);
	return 0;
}
