// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

// Example 1: 

// Input:

// s = "abc", t = "ahbgdc"

// Output:

// true

// Example 2:

// Input:

// s = "axc", t = "ahbgdc"

// Output:

// false

// Constraints:

// 0 <= s.length <= 100

// 0 <= t.length <= 104

// s and t consist only of lowercase English letters.


// For example:

// Input	Result
// abc
// ahbgdc
// true
// axc
// ahbgdc
// false

//Two pointer algorithm
#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    char b[100];
    scanf("%s",a);
    scanf("%s",b);
    int i=0,j=0,k=0;
    while(i<strlen(a) && j<strlen(b)){
        if(a[i]==b[j]){
            k++;
            i++;
            j++;
        }
        else
            j++;
    }
    if(k==strlen(a))
        printf("true");
    else
        printf("false");
    return 0;
}




//Recursion Technique


#include<stdio.h>
#include<string.h>
int subseq(char a[],char b[],int n,int m);
int main(){
    char a[10],b[100];
    scanf("%s",a);
    scanf("%s",b);
    int n=strlen(a);
    int m=strlen(b);
    int res=subseq(a,b,n,m);
    if(res==1)
        printf("true");
    else
        printf("false");
    return 0;
}
int subseq(char a[],char b[],int n,int m){
    if(n==0)
        return 1;
    if(m==0)
        return 0;
    if(a[n-1]==b[m-1])
        return subseq(a,b,n-1,m-1);
    return subseq(a,b,n,m-1);
}
