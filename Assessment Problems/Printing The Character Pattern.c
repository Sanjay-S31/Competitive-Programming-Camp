// Print the string as the following pattern (only for odd length string).

// Sample Input 1

// Hello

// Sample Output 1

//     l

//    ll

//   llo

//  lloH

// lloHe



// For example:

// Input	Result
// Hello
//     l
//    ll
//   llo
//  lloH
// lloHe


// PROGRAM
//       G
//      GR
//     GRA
//   GRAM
//   GRAMP
//  GRAMPR
// GRAMPRO
// Answer:(penalty regime: 0 %)
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[100];
//     scanf("%s",a);
//     int n=strlen(a);
//     int rem=n/2;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=0;
//         printf("%*s",n-i,"");
//         for(int j=n/2;j<rem+i && j<n;j++){
//             printf("%c",a[j]);
//             sum++;
//         }
//         if(sum>rem){
//             for(int k=0;k<i-sum && k<rem;k++){
//                 printf("%c",a[k]);
//             }
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int n=strlen(a);
    int half=n/2;
    int k=0;
    for(int i=0;i<n;i++){
        printf("%*s",n-i-1,"");
        if(i<=half){
            for(int j=half;j<=k+half;j++){
                    printf("%c",a[j]);
            }
            k=i+1;
        }
        else{
            for(int j=0;j<k;j++){
                printf("%c",a[j+half]);
            }
            for(int j=0;j<i-half;j++){
                printf("%c",a[j]);
            }
        }
        printf("\n");
    }
    return 0;
}


