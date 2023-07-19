// Assume that the given string has enough memory.

// Sample Input 1

// a2b4c6

// Sample Output 1

// aabbbbcccccc



// For example:

// Input	Result
// a2b4c6
// aabbbbcccccc
// a12b3d4
// aaaaaaaaaaaabbbdddd
// a100b3c12
// aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbcccccccccccc



#include<stdio.h>
#include<string.h>
int main(){
    for(int i=0;i<3;i++){
        char a;
        int n;
        scanf("%c%d",&a,&n);
        for(int j=0;j<n;j++){
            printf("%c",a);
        }
    }
    return 0;
}

