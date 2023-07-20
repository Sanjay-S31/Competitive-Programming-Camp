#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int n;
    for(int k=1;k<=t;k++){
        scanf("%d",&n);
        int left=1,tot=n*(n+1)/2;
        int right=tot*2-n+1;
        printf("Case #%d\n",k);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++)
                printf("**");
            for(int j=0;j<n-i;j++){
                printf("%d",left*10);
                left++;
            }
            for(int j=0;j<n-i;j++){
                if(j+1==n-i){
                    printf("%d",right);
                    right++;
                }
                else{
                    printf("%d",right*10);
                    right++;
                }
            }
            right=right-2*(n-i-1)-1;
            printf("\n");
        }
    }
    return 0;
}



// Decode the logic and print the Pattern that corresponds to given input.

// If N= 3

// then pattern will be:

// 10203010011012

// **4050809

// ****607

// If N= 4, then pattern will be:

// 1020304017018019020

// **50607014015016

// ****809012013

// ******10011

// Constraints

// · 2 <= N <= 100

// Input Format

// · First line contains T, the number of test cases

// · Each test case contains a single integer N

// Output

// 1. First line print Case #i where i is the test case number

// 2. In the subsequent line, print the pattern

// Test Case 1

// 3

// 3

// 4

// 5

// Output

// Case #1

// 10203010011012

// **4050809

// ****607

// Case #2

// 1020304017018019020

// **50607014015016

// ****809012013

// ******10011

// Case #3

// 102030405026027028029030

// **6070809022023024025

// ****10011012019020021

// ******13014017018

// ********15016


// For example:

// Input	Result
// 3
// 3
// 4
// 5
// Case #1
// 10203010011012
// **4050809
// ****607
// Case #2
// 1020304017018019020
// **50607014015016
// ****809012013
// ******10011
// Case #3
// 102030405026027028029030
// **6070809022023024025
// ****10011012019020021
// ******13014017018
// ********15016



#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int n;
    for(int k=1;k<=t;k++){
        scanf("%d",&n);
        printf("Case #%d\n",k);
        int tot=n*(n+1)/2;
        int left=1;
        int right=tot*2-n+1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                printf("**");
            }
            for(int j=0;j<n-i;j++){
                printf("%d",left*10);
                left++;
            }
            for(int j=0;j<n-i;j++){
                if(j+1==n-i){
                    printf("%d",right);
                }
                else{
                    printf("%d",right*10);
                    right++;
                }
            }
            right=right-2*(n-i-1);
            printf("\n");
        }
    }
    return 0;
}
