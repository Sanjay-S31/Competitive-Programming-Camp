#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int i=0;
    while(i<n/2){
        int row=i;
        int col=i;
        int row_end=n-i-1;
        int col_end=n-i-1;
        for(int k=col;k<col_end;k++)
            printf("%d ",a[row][k]);
        for(int k=row;k<row_end;k++)
            printf("%d ",a[k][col_end]);
        for(int k=row_end;k>col;k--)
            printf("%d ",a[col_end][k]);
        for(int k=col_end;k>row;k--)
            printf("%d ",a[k][col]);
        i++;
    }
    if(n%2==1)
        printf("%d",a[n/2][n/2]);
    return 0;
}
