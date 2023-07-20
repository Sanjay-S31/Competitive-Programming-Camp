#include<stdio.h>
int isPrime(int n);
int main(){
    int n;
    scanf("%d",&n);
    int p[n],k=1,x;
    p[0]=2;
    for(int i=3;i<n;i++){
        x=isPrime(i);
        if(x==1){
            p[k]=i;
            k++;
        }
    }
    for(int i=0;i<k;i++){
        printf("%d ",p[i]);
    }
    return 0;
}
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}


