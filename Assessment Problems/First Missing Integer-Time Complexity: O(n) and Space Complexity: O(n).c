// Given an unsorted integer array, find the first missing positive integer. 

// Example:

// Given [1,2,0] return 3,

// Given [3, 4, -1, 1] return 2,

// Given [-8, -7, -6] return 1

// Your algorithm should run in O(n) time and use constant space.

// INPUT(s):

// 10

// -9 -8 -7 -4 -3 -1 0 1 4 8

// OUTPUT(s):

// 2

// INPUT(s):

// 10

// 2 18 17 10 3 0 7 5 6 12

// OUTPUT(s):

// 1

// INPUT(s):

// 10

// -80 -74 -72 -59 -56 -51 -40 -33 -12 -11

// OUTPUT(s):

// 1

// For example:

// Input	Result
// 3
// 1 2 0
// 3
// 4
// 3 4 -1 1
// 2
// 3
// -8 -7 -6
// 1


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],res[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        res[i]=0;
    }
    for(int i=0;i<n;i++){
        res[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(res[i]>1)
            printf("%d",i);
    }
    return 0;
}


