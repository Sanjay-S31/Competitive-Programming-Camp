#include<stdio.h>
#include<string.h>
int isPalindrome(char a[]);
int main(){
    char a[100];
    scanf("%s",a);
    if(isPalindrome(a)==1)
        printf("The String is Palindrome");
    else
        printf("The String is not Palindrome");
    return 0;
}
int isPalindrome(char a[]){
    for(int i=0,j=strlen(a)-1;i<=j;i++,j--){
        if(a[i]!=a[j])
            return 0;
    }
    return 1;
}
