// The Tribonacci sequence Tn is defined as follows: 

// T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

// Given n, return the value of Tn.

// Example 1:

// Input: 

// 4

// Output: 

// 4

// Explanation:

// T_3 = 0 + 1 + 1 = 2

// T_4 = 1 + 1 + 2 = 4

// Example 2:

// Input: 

// 25

// Output: 

// 1389537 

// Constraints:

// 0 <= n <= 37

// The answer is guaranteed to fit within a 32-bit integer, ie. answer <= 2^31 - 1.



//Iterative Method

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int first=0,second=1,third=1;
    int sum=0;
    for(int i=2;i<n;i++){
        sum=first+second+third;
        first=second;
        second=third;
        third=sum;
    }
    printf("%d",sum);
    return 0;
}

//Recursion Method

#include<stdio.h>
int tribo(int n){
    if(n==0)
        return 0;
    if(n==1 || n==2)
        return 1;
    return tribo(n-1)+tribo(n-2)+tribo(n-3);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",tribo(n));
    return 0;
}

