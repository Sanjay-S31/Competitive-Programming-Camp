#include<stdio.h>
int main(){
    int n,angle=90,rot;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int k=0;k<n;k++){
        for(int i=0,j=n-1;i<j;i++,j--){
            temp=a[k][i];
            a[k][i]=a[k][j];
            a[k][j]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

