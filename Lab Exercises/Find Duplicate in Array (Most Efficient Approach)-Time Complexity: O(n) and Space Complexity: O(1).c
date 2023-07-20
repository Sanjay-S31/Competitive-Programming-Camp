#include<stdio.h>
int main(){
    int n,sum=0,res;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int a=(n*(n-1))/2;
    res=sum-a;
    printf("%d",res);
    return 0; 
}
