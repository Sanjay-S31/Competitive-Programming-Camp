//Given an input n, find whether n is happy number or mot
//If n=7,the sum of square of digits become 1 means it is a happy number, 4 means not happy number
//else return 0;
//Eg:7  7^2->49
// 4^2 + 9^2 -> 97
// 9^2 + 7^2 -> 130
// 1^2 + 3^2 + 0^2 -> 10
// 1^2 + 0^2 -> 1 -> Happy Number

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(1){
        int sum=0;
        int rem;
        while(n!=0){
            rem=(n%10)*(n%10);
            sum+=rem;
            n=n/10;
        }
        n=sum;
        printf("%d ",sum);
        if(sum==1){
            printf("Happy Number");
            break;
        }
        if(sum==4){
            printf("Not Happy Number");
            break;
        }
    }
    return 0;
}
