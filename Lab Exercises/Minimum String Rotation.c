// A rotation on a string is defined as removing first element and concatenating it at the end.

// Given N, and an array of N strings, print the minimum no. of cumulative rotations on the strings so as to make all the strings equal.

// If this is not possible return -1

// Input format

// · The first line contains N, the number of strings

// · This is followed by N strings

// Constraints

// · 2 <= N <= 104

// · 3 <= string length <= 100

// · All characters are in uppercase

// Example Input

// 4

// AABCD

// CDAAB

// DAABC

// AABCD

// Output

// 3

// Explanation

// · Finally, all the string will become aabcd. First and last strings require no rotations.

// · Second string requires 2 rotations

// · Last string requires 1 rotation

// · Hence total rotations required are 3


// For example:

// Input	Result
// 4
// AABCD
// CDAAB
// DAABC
// AABCD
// 3


#include<stdio.h>
#include<string.h>
#include<limits.h>
void LeftShift(char a[]);
int size;
int min=INT_MAX;
int main(){
    int n;
    scanf("%d",&n);
    char a[n][100];
    for(int i=0;i<n;i++){
        scanf("%s",a[i]);
        size=strlen(a[i]);
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                char left_str[100];
                strcpy(left_str,a[j]);
                for(int k=0;k<size;k++){
                    if(strcmp(a[i],left_str)==0){
                        break;
                    }
                    LeftShift(left_str);
                    sum++;
                }
                if(strcmp(a[i],left_str)!=0){
                    printf("-1");
                    return 0;
                }
            }
        }
        if(min>sum){
            min=sum;
        }
    }
    printf("%d",min);
    return 0;
}
void LeftShift(char a[]){
    char temp=a[0];
    for(int i=1;i<size;i++){
        a[i-1]=a[i];
    }
    a[size-1]=temp;
}



//Sorna Akka Method
#include<stdio.h>
#include<string.h>
#include<limits.h>
void LeftShift(char a[]);
int Rotate(char a[],char b[]);
int size;
int min=INT_MAX;
int main(){
    int n;
    scanf("%d",&n);
    char a[n][100];
    for(int i=0;i<n;i++){
        scanf("%s",a[i]);
        size=strlen(a[i]);
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(i!=j){
                sum+=Rotate(a[i],a[j]);
                if(sum==-1){
                    printf("-1");
                    return 0;
                }
            }
        }
        if(min>sum)
            min=sum;
    }
    printf("%d",min);
    return 0;
}
int Rotate(char a[],char b[]){
    char temp[100];
    strcpy(temp,b);
    for(int i=0;i<size;i++){
        if(strcmp(a,temp)==0)
            return i;
        LeftShift(temp);
    }
    return -1;
}
void LeftShift(char a[]){
    char temp=a[0];
    for(int i=1;i<size;i++){
        a[i-1]=a[i];
    }
    a[size-1]=temp;
}

