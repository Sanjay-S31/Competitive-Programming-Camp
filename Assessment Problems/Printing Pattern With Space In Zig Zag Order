#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c=0;
    for(int i=1;i<=n;i++){
        printf("%*s",3*(n-i),"");
        if(i%2==1){
            for(int j=0;j<n;j++){
                if(c<9){
                    printf("%2d ",++c);
                }
                else
                    printf("%2d ",++c);
            }
        }
        else{
            c+=n;
            for(int j=0;j<n;j++){
                printf("%2d ",c);
                c--;
            }
            c+=n;
        }
        printf("\n");
    }
    return 0;
}
