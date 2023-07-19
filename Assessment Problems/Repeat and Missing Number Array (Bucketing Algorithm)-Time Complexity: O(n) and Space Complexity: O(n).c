// You are given a read only array of n integers from 1 to n. 

// Each integer appears exactly once except A which appears twice and B which is missing.

// Return A and B.

// Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

// Note that in your output A should precede B.

// Example:

// Input: [3 1 2 5 3]

// Output: [3, 4]

// A = 3, B = 4

// INPUT(s):

// 5

// 3 1 2 5 3

// OUTPUT(s):

// 3 4

// INPUT(s):

// 5

// 1 4 5 3 3

// OUTPUT(s):

// 3 2

// INPUT(s):

// 5

// 1 4 2 5 5

// OUTPUT(s):

// 5 3


// For example:

// Input	Result
// 5
// 3 1 2 5 3 
// 3 4
// 5
// 1 4 5 3 3 
// 3 2

//Brute Force Approach

// #include<stdio.h>
// int main(){
//     int n,a,b;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 a=arr[i];
//                 break;
//             }
//         }
//     }
//     int temp;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]!=i+1){
//             b=i+1;
//             break;
//         }
//     }
//     printf("%d %d",a,b);
//     return 0;
    
// }


//Bucketing Method

#include<stdio.h>
int main(){
    int n,A,B;
    scanf("%d",&n);
    int a[n],bucket[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        bucket[i]=0;
    }
    for(int i=0;i<n;i++){
        bucket[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(bucket[i]>1){
            A=i;
        }
        if(bucket[i]==0){
            B=i;
        }
    }
    printf("Duplicate Element %d\n",A);
    printf("Missing Element %d",B);
    return 0;
}

