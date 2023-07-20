// Little Jill jumbled up the order of the letters in our dictionary. Now, Jack uses this list to find the smallest lexicographical string that can be made out of this new order. Can you help him? 

// You are given a string P that denotes the new order of letters in the English dictionary.

// You need to print the smallest lexicographic string made by rearranging all the letters of the given string S.

// Constraints

// · 1 <= T <= 1000

// · Length (P) = 26

// · 1 <= length (S) <= 100

// All characters in the string S, P are in lowercase.

// Input Format

// · The first line contains number of test cases T.

// · The second line has the string P.

// · The third line has the string S.

// Output

// · Print a single string in a new line for every test case giving the result.

// Example Input

// 2

// polikujmnhytgbvfredcxswqaz

// abcd

// qwryupcsfoghjkldezxvbintma

// ativedoc

// Output

// bdca

// codevita

// Explanation

// The transformed smallest lexicographical strings are in order they would be if order of letters are changed to string P.


// For example:

// Input	Result
// 2
// polikujmnhytgbvfredcxswqaz
// abcd
// qwryupcsfoghjkldezxvbintma
// ativedoc
// bdca
// codevita



//Lexi String - Brute Force

#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t!=0){
        char str[100];
        char substr[10];
        scanf("%s",str);
        scanf("%s",substr);
        int n=strlen(str);
        int m=strlen(substr);
        int a[m],k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(str[i]==substr[j]){
                    a[k]=i;
                    k++;
                }
            }
        }
        for(int i=0;i<k-1;i++){
            int temp;
            for(int j=i+1;j<k;j++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(int i=0;i<k;i++){
            printf("%c",str[a[i]]);
        }
        t--;
    }
    return 0;
}



#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t!=0){
        char str[100];
        char substr[10];
        scanf("%s",str);
        scanf("%s",substr);
        int n=strlen(str);
        int m=strlen(substr);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(str[i]==substr[j])
                    printf("%c",str[i]);
            }
        }
        printf("\n");
        t--;
    }
    return 0;
}


// Lexi String Sorna Akka Method

#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t!=0){
        char str[100],substr[100],index[100];
        scanf("%s",str);
        scanf("%s",substr);
        int n=strlen(substr);
        for(int i=0;i<27;i++)
            index[str[i]-'a']=i;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(index[substr[j]-'a']>index[substr[j+1]-'a']){
                    char temp=substr[j];
                    substr[j]=substr[j+1];
                    substr[j+1]=temp;
                }
            }
        }
        printf("%s\n",substr);
        t--;
    }
    return 0;
}




