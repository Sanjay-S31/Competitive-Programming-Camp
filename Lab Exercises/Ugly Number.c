#include<stdio.h>
int isPrime(int n);
int main(){
    int n,flag=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            if(isPrime(i)==1 && i==2 && i==3 && i==5){
                flag=1;
                printf("%d ",i);
            }
        }
    }
    if
    return 0;
}
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
