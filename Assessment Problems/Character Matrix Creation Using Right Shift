// Write a program to construct a latin square of a given N.

// A latin square is an n X n matrix array filled with n different symbols, each occurring exactly once in each row and exactly once in each column

// Sample Input 1

// 3

// Sample Output 1

// A B C 

// C A B 

// B C A



// For example:

// Input	Result
// 3
// A B C 
// C A B 
// B C A 
// 4
// A B C D 
// D A B C 
// C D A B 
// B C D A 

#include<stdio.h>
int n;
void Print(char a[]);
void RightShift(char a[]);
int main(){
    scanf("%d",&n);
    char a[n];
    for(int i=0;i<n;i++){
        a[i]='A'+i;
    }
    for(int i=0;i<n;i++){
        Print(a);
        RightShift(a);
    }
    return 0;
}
void RightShift(char a[]){
    char first=a[n-1];
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=first;
}
void Print(char a[]){
    for(int i=0;i<n;i++){
        printf("%c ",a[i]);
    }
    printf("\n");
}

