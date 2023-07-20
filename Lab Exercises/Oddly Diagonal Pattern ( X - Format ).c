// Given a string S of odd length L, the program must print it twice as diagonals with the middle letter being the point of intersection. 

// Input Format:

// The first line contains the value of S.

// Boundary Conditions:

// The length of the String S is from 3 to 20.

// 1 <= L (Length of S) <= 20

// Output Format:

// L lines printing the desired pattern.

// Example Input/Output 1:

// Input:

// PROGRAM

// Output:

// P     M  

//  R   A  

//   O R   

//    G  

//   O R  

//  R   A

// P     M

// Example Input/Output 2:

// Input:

// CABLE

// Output:

// C   E

//  A L

//   B

//  A L

// C   E


#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    for(int i=0,j=strlen(a)-1;i<strlen(a) && j>=0;i++,j--){
        if(a[i]==a[j]){
            printf("%*s",i,"");
            printf("%c",a[j]);
        }
        else{
            if(i<strlen(a)/2){
                printf("%*s",i,"");
                printf("%c",a[i]);
            }
            else{
                printf("%*s",j,"");
                printf("%c",a[j]);
            }
            if(j>strlen(a)/2){
                printf("%*s",j-i-1,"");
                printf("%c",a[j]);
            }
            else{
            // if(j<strlen(a)/2){
                printf("%*s",i-j-1,"");
                printf("%c",a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}



// Printing The String Diagonally


#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    for(int i=0;i<=strlen(a);i++){
        printf("%*s",2*i,"");
        printf("%c\n",a[i]);
    }
    return 0;
}
