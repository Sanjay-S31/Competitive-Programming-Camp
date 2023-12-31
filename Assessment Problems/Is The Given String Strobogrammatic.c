// Given a string num which represents an integer, return true if num is a strobogrammatic number.

// A strobogrammatic number is a number that looks the same when rotated 180 degrees (looked at upside down).

// Example 1:

// Input: 

// num = "69"

// Output: 

// true

// Example 2:

// Input: 

// num = "88"

// Output: 

// true

// Example 3:

// Input: 

// num = "962"

// Output: 

// false

// Constraints:

// 1 <= num.length <= 50

// num consists of only digits.

// num does not contain any leading zeros except for zero itself.



// For example:

// Input	Result
// 69
// true
// 88
// true
// 962
// false



#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int i=0,j=strlen(a)-1;
    while(i<j){
        if((a[i]=='0' && a[j]=='0') || (a[i]=='1' && a[j]=='1') || (a[i]=='8' && a[j]=='8')
        || (a[i]=='6' && a[j]=='9') || (a[i]=='9' && a[j]=='6')){
            i++;
            j--;
        }
        else{
            printf("false");
            return 0;
        }
    }
    printf("true");
    return 0;
}

