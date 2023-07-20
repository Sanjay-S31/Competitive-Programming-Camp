// A string is said to be palindrome, if it reads the same from both the ends. Given a string S, you are allowed to perform cyclic shifts. More formally, you can pick any one character from any end (head or tail) and you can append that character at the other end. For example, if the string is abc, then if we do a shift using the character at head position then the string becomes bca. Similarly, if we do the shift using the character at the tail then the input string becomes cab. Your task is to find out the minimum number of shifts needed to make the given string, a palindrome.

// In case, we can’t convert the string to palindrome then print -1.

// Input Format

// First line starts with T i.e. number of test cases, and then T lines will follow each containing a string S.

// Output Format

// Print the minimum number of cyclic shifts for each string if it can be made a palindrome, else -1.

// Constraints

// 1<=T<=100

// 1<=|S|<=300, S will contains only lower case alphabets a-z.

// Sample Input and Output

// Input

// 4

// abbb

// aaabb

// aabb

// abc

// Output

// -1

// 1

// 1

// -1

// Explanation:

// For Test Case 2 (aaabb):

// Shift the character at the tail to the head and the result will be baaab, which is a palindrome. This is an operation which requires minimum number of shifts to make the given string a palindrome.

// For Test Case 3 (aabb):

// One way to convert the given string to palindrome is, shift the character at the head to the tail, and the result will be abba, which is a palindrome. Another way is to shift the character at the tail to the head, and the result will be baab, which is also a palindrome. Both require only one shift.


// For example:

// Input	Result
// 4
// abbb
// aaabb
// aabb
// abc
// -1
// 1
// 1
// -1
// 8
// xyyyxy
// xyyy
// xxxyyxxxy
// xxxyy
// xxyyxxy
// xxyy
// xyzzyxy
// xyz
// -1
// -1
// 4
// 1
// 3
// 1
// 3
// -1


#include<stdio.h>
#include<string.h>
int isPalindrome(char a[]);
void LeftShift(char a[]);
void RightShift(char a[]);
int n;
int main(){
    int t;
    scanf("%d",&t);
    while(t!=0){
        char a[300];
        scanf("%s",a);
        n=strlen(a);
        char left_str[300],right_str[300];
        strcpy(left_str,a);
        strcpy(right_str,a);
        int flag=0,shifts=0;
        for(int i=0;i<=n/2;i++){
            if(isPalindrome(left_str)==1 || isPalindrome(right_str)==1){
                flag=1;
                break;
            }
            LeftShift(left_str);
            RightShift(right_str);
            shifts++;
        }
        if(flag==1){
            printf("%d\n",shifts);
        }
        else{
            printf("-1\n");
        }
        t--;
    }
    return 0;
}
int isPalindrome(char a[]){
    for(int i=0,j=n-1;i<j;i++,j--){
        if(a[i]!=a[j])
            return 0;
    }
    return 1;
}
void LeftShift(char a[]){
    char first=a[0];
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=first;
}
void RightShift(char a[]){
    char last=a[n-1];
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=last;
}




#include<stdio.h>
#include<string.h>
int isPalindrome(char a[]);
void LeftShift(char a[]);
void RightShift(char a[]);
int n;
int main(){
    char a[100];
    int t;
    scanf("%d",&t);
    while(t!=0){
        scanf("%s",a);
        n=strlen(a);
        char left_str[100],right_str[100];
        strcpy(left_str,a);
        strcpy(right_str,a);
        int shifts=0,flag=0;
        for(int i=0;i<=n/2;i++){
            if(isPalindrome(left_str)==1 || isPalindrome(right_str)==1){
                flag=1;
                break;
            }
            LeftShift(left_str);
            RightShift(right_str);
            shifts++;
        }
        if(flag==1){
            printf("%d\n",shifts);
        }
        else{
            printf("-1\n");
        }
        t--;
    }
    return 0;
}
int isPalindrome(char a[]){
    for(int i=0,j=n-1;i<=j;i++,j--){
        if(a[i]!=a[j])
            return 0;
    }
    return 1;
}
void LeftShift(char a[]){
    char first=a[0];
    for(int i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=first;
    printf("Left Shifts :");
    for(int i=0;i<n;i++){
        printf("%c ",a[i]);
    }
    printf("\n");
}
void RightShift(char a[]){
    char last=a[n-1];
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=last;
    printf("Right Shifts :");
    for(int i=0;i<n;i++){
        printf("%c ",a[i]);
    }
    printf("\n");
}

