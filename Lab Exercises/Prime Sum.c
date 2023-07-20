// Given an even number (greater than 2), return two prime numbers whose sum will be equal to given number.

// NOTE: A solution will always exist.

// Example:

// Input:

// 4

// Output:

// 2 + 2 = 4

// If there are more than one solutions possible, return the lexicographically smaller solution.

// If [a, b] is one solution with a <= b, and [c,d] is another solution with c <= d, then

// [a, b] < [c, d]

// If a < c OR a==c AND b < d.


// For example:

// Input	Result
// 4
// 2 2

#include<stdio.h>
int isPrime(int n);
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        int sum=0;
        for(int j=2;j<n;j++){
            if(isPrime(i) && isPrime(j)){
                sum=i+j;
                if(sum==n){
                    printf("%d %d",i,j);
                    return 0;
                }
            }
        }
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

