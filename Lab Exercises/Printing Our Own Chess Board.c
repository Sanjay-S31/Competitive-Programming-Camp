#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)%2==0){
                a[i][j]='W';
            }
            else{
                a[i][j]='B';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Let’s print a chessboard!

// Write a program that takes input:

// The first line contains T, the number of test cases

// Each test case contains an integer N and also the starting character of the chessboard

// Output Format

// Print the chessboard as per the given examples

// Sample Input / Output

// Input:

// 2

// 2 W

// 3 B

// Output:

// WB

// BW

// BWB

// WBW

// BWB

 


// For example:

// Input	Result
// 2
// 2 W
// 3 B
// WB
// BW
// BWB
// WBW
// BWB



#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t!=0){
        int n;
        scanf("%d\n",&n);
        char a[n][n];
        char b,c;
        scanf("%c",&b);
        if(b=='W'){
            c='B';
        }
        else{
            c='W';
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((i+j)%2==0)
                    a[i][j]=b;
                else
                    a[i][j]=c;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%c",a[i][j]);
            }
            printf("\n");
        }
        t--;
    }
}

