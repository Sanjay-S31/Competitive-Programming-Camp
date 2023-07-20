// Identify the logic behind the series:

// 6 28 66 120 190 276 …

// The numbers in the series should be used to create a Pyramid.

// The base of the Pyramid will be the widest and will start converging towards the top where there will only be one element. Each successive layer will have one number less than that on the layer below it. The width of the Pyramid is specified by an input parameter N. In other words, there will be N numbers on the bottom layer of the pyramid.

// The Pyramid construction rules are as follows:

// 1. First number in the series should be at the top of the Pyramid.

// 2. Last N number of the series should be on the bottom-most layer of the Pyramid, with Nth number being the right-most number of this layer.

// 3. Numbers less than 5-digits must be padded with zeroes to maintain the sanctity of a Pyramid when printed. Have a look at the examples below to get a pictorial understanding of what this rule actually means.

// Example

// If input is 2, output will be:

//   00006  

// 00028 00066

// If input is 3, output will be:

//       00006  

//   00028 00066  

// 00120 00190 00276

// Formal input and output specifications are stated below:

// Input Format:

// First line of input will contain number k - the number of inputs.

// The following k lines contain N that corresponds to the width of the bottom-most layer of each Pyramid

// Output Format:

// The Pyramid constructed out of numbers in the series as per stated construction rules

// Constraints:

// 0 < N <= 14


// For example:

// Input	Result
// 1
// 2
//   00006   
// 00028 00066
// 1
// 5
//             00006 
//          00028 00066 
//       00120 00190 00276 
//   00378 00496 00630 00780 
// 00946 01128 01326 01540 01770 


#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int n;
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int f=3,s=2;
        for(int j=1;j<=n;j++){
            printf("%*s",(n-j)*3,"");
            for(int k=0;k<j;k++){
                printf("%05d ",f*s);
                f+=4;
                s+=2;
            }
            printf("\n");
        }
    }
    return 0;
}




// #include<stdio.h>
// int pattern(int ele);
// int main(){
//     int t;
//     scanf("%d",&t);
//     int n;
//     for(int i=1;i<=t;i++){
//         scanf("%d",&n);
//         int e=1;
//         for(int j=1;j<=n;j++){
//             printf("%*s",(n-j)*3,"");
//             for(int k=0;k<j;k++){
//                 printf("%05d ",pattern(e));
//                 e++;
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }
// int pattern(int ele){
//     int sum,f=2,s=3;
//     for(int i=0;i<ele;i++){
//         sum=f*s;
//         f+=2;
//         s+=4;
//     }
//     return sum;
// }

