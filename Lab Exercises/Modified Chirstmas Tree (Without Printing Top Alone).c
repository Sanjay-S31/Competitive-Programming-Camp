#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            printf("%*s",2*(n-j),"");
            for(int k=0;k<((2*j)+1);k++){
                printf("* ");
            }
            printf("\n");
        }
    }
    for(int i=0;i<2;i++){
        printf("%*s",n*2,"");
        printf("*\n");
    }
    return 0;
}

