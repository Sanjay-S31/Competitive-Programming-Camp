// Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

// Each row must contain the digits 1-9 without repetition.

// Each column must contain the digits 1-9 without repetition.

// Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

// Note:

// ·         A Sudoku board (partially filled) could be valid but is not necessarily solvable.

// ·         Only the filled cells need to be validated according to the mentioned rules.

// Example 1:

// Input: board =

// [["5","3",".",".","7",".",".",".","."]

// ,["6",".",".","1","9","5",".",".","."]

// ,[".","9","8",".",".",".",".","6","."]

// ,["8",".",".",".","6",".",".",".","3"]

// ,["4",".",".","8",".","3",".",".","1"]

// ,["7",".",".",".","2",".",".",".","6"]

// ,[".","6",".",".",".",".","2","8","."]

// ,[".",".",".","4","1","9",".",".","5"]

// ,[".",".",".",".","8",".",".","7","9"]]

// Output:

// true

// Example 2:

// Input: board =

// [["8","3",".",".","7",".",".",".","."]

// ,["6",".",".","1","9","5",".",".","."]

// ,[".","9","8",".",".",".",".","6","."]

// ,["8",".",".",".","6",".",".",".","3"]

// ,["4",".",".","8",".","3",".",".","1"]

// ,["7",".",".",".","2",".",".",".","6"]

// ,[".","6",".",".",".",".","2","8","."]

// ,[".",".",".","4","1","9",".",".","5"]

// ,[".",".",".",".","8",".",".","7","9"]]

// Output:

// false

// Explanation:

// Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.

// Constraints:

// board.length == 9

// board[i].length == 9

// board[i][j] is a digit 1-9 or '.'.


// For example:

// Input	Result
// 53..7....
// 6..195...
// .98....6.
// 8...6...3
// 4..8.3..1
// 7...2...6
// .6....28.
// ...419..5
// ....8..79
// true
// 83..7....
// 6..195...
// .98....6.
// 8...6...3
// 4..8.3..1
// 7...2...6
// .6....28.
// ...419..5
// ....8..79
// false


#include<stdio.h>
#include<string.h>
int main(){
    int n=9,flag1=0,flag2=0,flag3=0;
    char a[n][n];
    for(int i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[k][i]=='.' || a[k][j]=='.'){
                    continue;
                }
                if(a[k][i]==a[k][j]){
                    flag1=1;
                    printf("%c reappers in row %d\n",a[k][i],k+1);
                }
            }
        }
    }
    //Column-Check
    for(int k=0;k<n;k++){
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i][k]=='.'|| a[j][k]=='.'){
                    continue;
                }
                if(a[i][k]==a[j][k]){
                    flag2=1;
                    printf("%c reappers in column %d\n",a[i][k],k+1);
                }
            }
        }
    }
    //3x3 Matrix Column-Check3
    
    int box=0;
    for(int i=0;i<n;i+=3){
        for(int j=0;j<n;j+=3){
            char check[n],b=0;
            for(int k=i;k<i+3;k++){
                for(int l=j;l<j+3;l++){
                    if(a[k][l]!='.'){
                        check[b]=a[k][l];
                        b++;
                    }
                }
            }
            box++;
            for(int e=0;e<b-1;e++){
                for(int f=e+1;f<b;f++){
                    if(check[e]==check[f]){
                        flag3=1;
                        printf("%c reappears in box-%d\n",check[e],box);
                    }
                }
            }
        }
    }
    if((flag1 && flag2 && flag3)==0)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}

