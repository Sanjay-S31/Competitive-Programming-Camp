// Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

// Example 1:

// 1->2->3->4->5->6->7->8->9 (in spiral format)

// Input:

// n = 3

// Output:

// [[1,2,3],[8,9,4],[7,6,5]]

// Example 2:

// Input:

// n = 1

// Output:

// [[1]]

// Constraints:

// 1 <= n <= 20


// For example:

// Input	Result
// 3
// 1 2 3
// 8 9 4
// 7 6 5
// 1
// 1


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sq=n*n;
    int a[n][n];
    int i=0;
    int size=1;
    while(i<n/2 && size<sq){
        int row=i;
        int col=i;
        int row_end=n-i-1;
        int col_end=n-i-1;
        for(int k=col;k<col_end;k++)
            a[row][k]=size++;
        for(int k=row;k<row_end;k++)
            a[k][col_end]=size++;
        for(int k=col_end;k>col;k--)
            a[row_end][k]=size++;
        for(int k=row_end;k>row;k--)
            a[k][col]=size++;
        i++;
    }
    if(n%2==1)
        a[n/2][n/2]=size;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}


