//Bucketing Algorithm
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int res[n];
    for(int i=0;i<n;i++)
        res[i]=0;
    for(int i=0;i<n;i++){
        res[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(res[i]>1)
            printf("%d",i);
    }
    return 0;
}

